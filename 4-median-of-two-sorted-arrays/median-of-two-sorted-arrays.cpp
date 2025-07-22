class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>v;
       for(auto i : nums1)
       v.push_back(i); 

       for(auto i : nums2)
       v.push_back(i); 

       sort(v.begin(),v.end());

       int l = v.size();

       double ans = 0;

       if(l%2==0)
        ans = (v[l/2] + v[(l/2)-1])/2.0;

       else
        ans = v[l/2]/1.0;

     return ans;
    }
};