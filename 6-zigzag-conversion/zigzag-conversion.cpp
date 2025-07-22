
class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows==1 || s.length()<= numRows)
      return s;
      int l = s.length();
      vector<string> rows(min(numRows,l));
      int currRow = 0;
      bool goingDown = true;

      for(char c: s){
        rows[currRow]+=c;

        if(currRow == 0 )
        goingDown = true;
        if(currRow == numRows-1)
        goingDown = false;

        currRow += goingDown ? 1 : -1 ;
      }

      string res;
      for(const string& row : rows)
      res+=row;

      return res;
    }
};