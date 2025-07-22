class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long rem = 0;
        int ori = x;
        while (x != 0) {
            int digit = x % 10;
            rem = rem * 10 + digit;
            x /= 10; 
        }

        if (rem == ori && rem <= INT_MAX && rem >= INT_MIN)
            return true;
        else
            return false;
    }
};
