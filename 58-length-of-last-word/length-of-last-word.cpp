class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length(); //8
        int count = 0; //2
        int sz = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i]==' ')
                count++;
            else
            break;
        }
        //   fly me   to   the moon  
        n = n-count; // 6
        for(int i=n-1; i>=0; i--){
            if(s[i]==' ')
            break;
            else{
            sz++;
            continue;
            }
            
        }

        return sz;
    }
};