class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                if((i+1)<=(n-1)&&(s[i+1]=='V'||s[i+1]=='X'))sum-=1;
                else sum+=1;
            }
            else if(s[i]=='V'){
                sum+=5;
            }

            else if(s[i]=='X'){
                if((i+1)<=(n-1)&&(s[i+1]=='L'||s[i+1]=='C'))sum-=10;
                else sum+=10;
            }

            else if(s[i]=='L'){
                sum+=50;
            }

            else if(s[i]=='C'){
                if((i+1)<=(n-1)&&(s[i+1]=='D'||s[i+1]=='M'))sum-=100;
                else sum+=100;
            }

            else if(s[i]=='D'){
                sum+=500;
            }

            else if(s[i]=='M'){
                sum+=1000;
            }

        }
        return sum;
    }
}; //My solution

/*And my hardcoding/bruteforcing streak continues, 
as the ideal solution would've been to just check for 
one if condition where if the current char is less than the next char, it automatically means subtraction*/

/*
class Solution {
public:
    int value(char c){
        if(c==73) return 1;     // 'I'
        if(c==86) return 5;     // 'V'
        if(c==88) return 10;    // 'X'
        if(c==76) return 50;    // 'L'
        if(c==67) return 100;   // 'C'
        if(c==68) return 500;   // 'D'
        if(c==77) return 1000;  // 'M'
        return 0;
    }

    int romanToInt(string s) {
        int ans = 0;

        for(int i=0;i<s.size();i++){
            if(i+1 < s.size() && value(s[i]) < value(s[i+1]))
                ans -= value(s[i]);
            else
                ans += value(s[i]);
        }
        return ans;
    }
};
*/