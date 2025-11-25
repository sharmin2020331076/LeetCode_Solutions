class Solution {
public:


    string RLE(const string &s) {
    string result = "";
    int count = 1;

    for (int i = 1; i <= s.size(); i++) {
        if (i < s.size() && s[i] == s[i-1]) {
            count++;
        } else {
            result += to_string(count) + s[i-1];
            count = 1;
        }
    }
    return result;
}
string countAndSay(int n) {
    string s = "1";
    for (int i = 1; i < n; i++) {
        s = RLE(s);
    }
    return s;
}
};