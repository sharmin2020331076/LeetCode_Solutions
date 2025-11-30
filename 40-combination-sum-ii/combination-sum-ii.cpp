class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>& path, vector<vector<int>>& result, int start) {
        if (target == 0) {
            result.push_back(path);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i-1]) continue; // skip duplicate numbers at same level
            if (candidates[i] <= target) {
                path.push_back(candidates[i]);          // choose
                backtrack(candidates, target - candidates[i], path, result, i+1); // move forward
                path.pop_back();                        // undo
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // sort first
        vector<vector<int>> result;
        vector<int> path;
        backtrack(candidates, target, path, result, 0);
        return result;
    }
};
