class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>vec;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
          vec.push_back(i);
        }
       }
       int n = vec.size();
       if(vec.size() == 0)
       return {-1, -1};
       else
       return {vec[0],vec[n-1]};
    }
};