class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int maxVal = 0, count = 0;
        for(auto it: nums){
            mp[it]++;
            if(mp[it]>count){
            count = mp[it];
            maxVal = it;
            }
        }

        return maxVal;

    }
};