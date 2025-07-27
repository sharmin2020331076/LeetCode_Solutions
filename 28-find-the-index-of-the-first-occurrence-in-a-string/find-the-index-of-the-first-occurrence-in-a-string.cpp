class Solution {
public:
    int strStr(string haystack, string needle) {
      int len = needle.length();
      int n = haystack.length();
      for(int i=0;i<n;i++){
        if(haystack.substr(i,len)==needle)
          return i;
        
      }

      return -1;
    }
};