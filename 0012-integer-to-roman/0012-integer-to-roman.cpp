class Solution {
public:
    string intToRoman(int num) {
        std::string roman = "";
        //for the thousand values.
        int Mnum = num/1000;
        roman.append(Mnum,'M');
        num%=1000;
        //next for values of hundred
        int Cnum = num/100;
        num%=100;
        if(Cnum==9){roman.append("CM");}
        else if(Cnum>=5){roman.append("D");roman.append(Cnum-5,'C');}
        else if(Cnum==4){roman.append("CD");}
        else{roman.append(Cnum,'C');}
        //next for values of tens
        int Xnum = num/10;
        num%=10;
        if(Xnum==9){roman.append("XC");}
        else if(Xnum>=5){roman.append("L");roman.append(Xnum-5,'X');}
        else if(Xnum==4){roman.append("XL");}
        else{roman.append(Xnum,'X');}

        if(num==9){roman.append("IX");}
        else if(num>=5){roman.append("V");roman.append(num-5,'I');}
        else if(num==4){roman.append("IV");}
        else{roman.append(num,'I');}
        return roman;
    }
};