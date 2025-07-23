class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char, string> p = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    vector<string> v{""};
    if(digits.length()>0){
        for (char digit : digits) {
        vector<string> temp;
        string letters = p[digit];

        for (const string& combo : v) {
            for (char ch : letters) {
                temp.push_back(combo + ch);
            }
        }

        v = temp; 
    }
    return v;
    }
    else
    return {};
    
}
};
