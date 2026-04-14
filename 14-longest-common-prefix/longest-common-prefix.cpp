class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        if(strs.empty())
        return s;
        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();

        int i = 0;
        int min_len = min(first.length(), last.length());
        while(i < min_len && first[i]==last[i]){
            i++;
        }
        return first.substr(0,i);
    }
};