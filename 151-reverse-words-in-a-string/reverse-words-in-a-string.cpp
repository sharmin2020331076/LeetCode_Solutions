class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string temp = "";
        string reverseWords = "";
        for(auto c: s){
            if(c!=' '){
                temp+=c;
            }
            else{
                if(!temp.empty()){
                    str.push_back(temp);
                    temp = "";
                }
            }
        }
        if(!temp.empty())
        str.push_back(temp);

        reverse(str.begin(), str.end());
        for(int i=0; i<str.size(); i++){
            reverseWords += str[i];
            reverseWords += ' ';
        }
        int n = reverseWords.length();
        return reverseWords.substr(0, n-1);
    }
};