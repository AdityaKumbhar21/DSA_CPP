#include<bits/stdc++.h>
using namespace std;


string roman(int n){
    switch (n)
    {
        
    case 1:
        return "I";
        break;

    case 2:
        return "II";
        break;

    case 3:
        return "III";
        break;

    case 4:
        return "IV";
        break;

    case 5:
        return "V";
        break;

    case 6:
        return "VI";
        break;

    case 7:
        return "VII";
        break;

    case 8:
        return "VIII";
        break;

    case 9:
        return "IX";
        break;

    case 10:
        return "X";
        break;

    case 20:
        return "XX";
        break;

    case 30:
        return "XXX";
        break;

    case 40:
        return "XL";
        break;

    case 50:
        return "L";
        break;

    case 60:
        return "LX";
        break;

    case 70:
        return "LXX";
        break;
    

    case 80:
        return "LXXX";
        break;

    case 90:
        return "XC";
        break;

    case 100:
        return "C";
        break;

    case 200:
        return "CC";
        break;

    case 300:
        return "CCC";
        break;

    case 400:
        return "CD";
        break;

    case 500:
        return "D";
        break;

    case 600:
        return "DC";
        break;

    case 700:
        return "DCC";
        break;

    case 800:
        return "DCCC";
        break;

    case 900:
        return "CM";
        break;

    case 1000:
        return "M";
        break;

    case 2000:
        return "MM";
        break;

    case 3000:
        return "MMM";
        break;
    
    default:
        break;
    }
}

string IntToRoman(int num){
    int last = 0, digit;
    string ans;
    while(num != 0){
        digit = num%10;
        int n = digit*10 - last;
        last = digit;
        cout<<n<<endl;
        cout<<last<<" "<<digit<<endl;
        ans += roman(n);
        num /= 10;
    }

    return ans;
}

int main()
{
    cout<<IntToRoman(3749);
 return 0;
}