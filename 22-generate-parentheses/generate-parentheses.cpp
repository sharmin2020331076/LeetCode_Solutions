class Solution {
public:
    vector<string> generateParenthesis(int n) {
      vector<string> vec;
      string s;
      backTrack(vec,s,0,0,n);
      return vec;
    }

    void backTrack(vector<string>&vec,string s, int open,int close,int n){
      if(s.length()==2*n){
        vec.push_back(s);
        return ;
      }

      if(open<n){
        backTrack(vec,s+'(',open+1,close,n);
      }
      if(close<open){
        backTrack(vec,s+')',open,close+1,n);
      }
      
    }
    };