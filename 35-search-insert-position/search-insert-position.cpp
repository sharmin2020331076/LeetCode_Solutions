class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ind;
        bool flag = false;
        for(int i=0;i<n;i++){
          if(nums[i]==target){
            ind = i;
            flag = true;
          }
        }
        if(flag==true)
        return ind;
        else{
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        for(int i=0;i<n+1;i++){
          if(nums[i]==target){
            ind = i;
            flag = true;
          }
        }
        return ind;
        }
    }
};