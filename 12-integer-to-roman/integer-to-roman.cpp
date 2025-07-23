class Solution {
public:
    string intToRoman(int num) {
        int count;
        string str = "";
        if(num>=1000)
        {   
            count = num/1000;
            num=num%1000;
            str+=string(count,'M');
        }

        if(num>=900)
        {
            str+="CM";
            num%=900;
           
        }

        if(num>=500)
        {
            str+='D';
            num%=500;
        
        }
        if(num>=400)
        {
            num%=400;
            str+="CD";
        }
        
        if(num>=100){
            count = num/100;
            num=num%100;
            str+=string(count,'C');
        }

        if(num>=90){
            num%=90;
            str+="XC";
        }
        if(num>=50){
            num%=50;
            str+='L';
        }
        if(num>=40){
            num%=40;
            str+="XL";
        }
        if(num>=10){
            count = num/10;
            num%=10;
            str+=string(count,'X');
        }
        if(num>0){
            if(num==9)
            str+="IX";
            else if(num==5)
            str+='V';
            else if(num==4)
            str+="IV";
            else if(num>5){
                str+='V';
                count = num-5;
                str+=string(count,'I');
            }
            else if(num<4){
                str+=string(num,'I');
            }
        }
        return str;
    }
};