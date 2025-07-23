class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int rom = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='M')
            rom +=1000;

            else if(i!=n-1 && s[i]=='C' && s[i+1]=='M'){
                rom+=900;
                i++;
            }
            else if(i!=n-1 && s[i]=='C' && s[i+1]=='D'){
                rom+=400;
                i++;
            }

            else if(i!=n-1 && s[i]=='X' && s[i+1]=='C'){
                rom+=90;
                i++;
            }
            else if(i!=n-1 && s[i]=='X' && s[i+1]=='L'){
                rom+=40;
                i++;
            }
            else if(i!=n-1 && s[i]=='I' && s[i+1]=='X'){
                rom+=9;
                i++;
            }
            else if(i!=n-1 && s[i]=='I' && s[i+1]=='V'){
                rom+=4;
                i++;
            }

            else if(s[i]=='I')
            rom +=1;
            else if(s[i]=='V')
            rom +=5;
            else if(s[i]=='X')
            rom +=10;
            else if(s[i]=='L')
            rom +=50;
            else if(s[i]=='C')
            rom +=100;
            else if(s[i]=='D')
            rom +=500;
        }

        return rom;
    }
};