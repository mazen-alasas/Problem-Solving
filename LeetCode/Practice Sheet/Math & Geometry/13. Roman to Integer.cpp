class Solution {
public:
    int romanToInt(string s) {
        int ans = 0,a,b;
        for(int i = 0; s[i] != 0; i++) {
            if(s[i] == 'I') a = 1;
            if(s[i] == 'V') a = 5;
            if(s[i] == 'X') a = 10;
            if(s[i] == 'L') a = 50;
            if(s[i] == 'C') a = 100;
            if(s[i] == 'D') a = 500;
            if(s[i] == 'M') a = 1000;
            if(s[i+1] == 'I') b = 1;
            if(s[i+1] == 'V') b = 5;
            if(s[i+1] == 'X') b = 10;
            if(s[i+1] == 'L') b = 50;
            if(s[i+1] == 'C') b = 100;
            if(s[i+1] == 'D') b = 500;
            if(s[i+1] == 'M') b = 1000;
            (a >= b)? ans += a : ans -= a;
        }
        return abs(ans);
    }
};

// or

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, a, b;
        unordered_map<char, int> mp{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for(int i = 0; s[i] != 0; i++) {
            a = mp[s[i]];
            b = mp[s[i+1]];
            a >= b ? ans += a : ans -= a;
        }
        return abs(ans);
    }
};