class Solution {
public:
    bool canJump(vector<int>& nums) {
        int step = nums[0];
        bool flag = true;
        for(int i=1; i<nums.size(); i++){
            if(step == 0){
                flag = false;
                break;
            }
            if(step <= nums[i])
            {
                step = nums[i];

            }
            else
            step--;
        }
        return flag;
    }
    
};