class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        for(auto it: nums)
        {
            if(it!=val)
            v.push_back(it);
        }
        for(int i=0;i< v.size();i++){
           nums[i]=v[i];
        }
        return v.size();
    }


};