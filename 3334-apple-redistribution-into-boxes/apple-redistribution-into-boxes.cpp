class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(apple.begin(),apple.end());
        sort(capacity.begin(),capacity.end(),greater<int>());
        int n = apple.size();
        int m = capacity.size();
        int count = 0;
        int ans = 0;
        bool flag = false;
        for(int i=0;i<n;i++){
          count+=apple[i];
        }
        for(int i=0;i<m;i++){
          if(count<=capacity[i])
          {
            ans++;
            break;
          }
          else{
            count-=capacity[i];
            ans++; 
          }
          
        }
        return ans;
    }
};