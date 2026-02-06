class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       unordered_map<int,int> mp;
       vector<int> v;
       for(auto it: nums){
           mp[it]++;
           if(mp[it]<3)
           v.push_back(it);
        }

        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
        //sort(nums.begin(),nums.end());

        return v.size();


        
    }
};