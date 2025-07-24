class Solution {
public:

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int j=0;j<n;j++){
            if (j > 0 && nums[j] == nums[j - 1]) continue;
            for (int i = j+1; i <n; i++) {
            if (i > j+1 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = n- 1;

            while (left < right) {
                long long sum = (long long)nums[j]+ nums[i] + nums[left] + nums[right];

                if (sum == target) {
                    res.push_back({ nums[j], nums[i], nums[left], nums[right]});

                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        }
        return res;
    }
};