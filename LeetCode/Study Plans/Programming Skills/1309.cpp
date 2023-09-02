class Solution {
public:
    string freqAlphabets(string s) {
        string answer = "";
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '#') {
                int num = (s[--i] - '0') + (10 * (s[--i] - '0')) - 10;
                char ch = num + 'j';
                answer = ch + answer;
            } else {
                char ch = s[i] - '1' + 'a';
                answer = ch + answer;
            }
        }
        return answer;
    }
};
