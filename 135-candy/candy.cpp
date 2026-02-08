class Solution {
public:
    int candy(vector<int>& ratings, int ans = 0) {
        int n = ratings.size();
        vector<int> vec(n,1);

        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1])
            vec[i] = vec[i-1]+1;
        }
        for(int i=n-1; i>0; i--){   
            if(ratings[i-1]>ratings[i])
            vec[i-1] = max(vec[i-1], vec[i]+1);
            ans+=vec[i-1];
        }
        return ans+vec[n-1];
    }
};