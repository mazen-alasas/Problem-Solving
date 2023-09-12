//O(n)
class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());  // O(n)
        int len = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ' && s[i + 1] != ' ')
                len++;
            else if(s[i] != ' ' && s[i + 1] == ' '){
                len++;
                break;
            }
        }
        return len;
    }
};
// O(n)
class Solution {
public:
    int lengthOfLastWord(string s) { 
        int len = 0, tail = s.size(() - 1;
        while (tail >= 0 && s[tail] == ' ') 
             tail--;
        while (tail >= 0 && s[tail] != ' ') {
            len++;
            tail--;
        }
        return len;
    }
};
// O(n)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ' ' && ans > 0) 
                return ans;
            if(s[i] != ' ') 
                ans++;
        }
        return ans;
    }
};
