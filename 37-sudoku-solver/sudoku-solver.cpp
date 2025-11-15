class Solution {
    int rowMask[9] = {0}, colMask[9] = {0}, boxMask[9] = {0};
public:
    void solveSudoku(vector<vector<char>>& board) {
        // Initialize masks
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] != '.') {
                    int num = board[r][c] - '1';
                    int box = (r/3)*3 + c/3;
                    rowMask[r] |= (1 << num);
                    colMask[c] |= (1 << num);
                    boxMask[box] |= (1 << num);
                }
            }
        }
        backtrack(board, 0, 0);
    }

private:
    bool backtrack(vector<vector<char>>& board, int r, int c) {
        if (r == 9) return true;
        if (c == 9) return backtrack(board, r+1, 0);
        if (board[r][c] != '.') return backtrack(board, r, c+1);

        int box = (r/3)*3 + c/3;
        for (int num = 0; num < 9; num++) {
            int mask = 1 << num;
            if (!(rowMask[r] & mask) && !(colMask[c] & mask) && !(boxMask[box] & mask)) {
                board[r][c] = '1' + num;
                rowMask[r] |= mask;
                colMask[c] |= mask;
                boxMask[box] |= mask;

                if (backtrack(board, r, c+1)) return true;

                board[r][c] = '.';
                rowMask[r] ^= mask;
                colMask[c] ^= mask;
                boxMask[box] ^= mask;
            }
        }
        return false;
    }
};
