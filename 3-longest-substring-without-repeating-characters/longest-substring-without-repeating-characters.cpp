class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for(int i=0;i<s.length();i++){
            set<char>st;
        for(int j=i;j<s.length();j++){
                if(st.find(s[j]) != st.end()){
                    if(max<st.size())
                     max=st.size();
                    goto end;
            }
                else
                st.insert(s[j]);
        }
         if(max<st.size())
            max=st.size();
        end:


    }
    return max;
    }
};