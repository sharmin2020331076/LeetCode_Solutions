class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0, cur = 0, fur = 0;
       for(int i=0; i<nums.size()-1; i++){
        fur = max(fur, i+nums[i]);
        if(i == cur){
        jump++;
        cur = fur;
        }
       }
       return jump;
    }
};