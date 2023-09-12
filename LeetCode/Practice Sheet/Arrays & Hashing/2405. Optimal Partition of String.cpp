class Solution {
public:
    int partitionString(string s) {
        int chars[26]{}, ctr = 0, x = 0;
        for(int i = 0; i < s.size(); i++) {
            if(chars[s[i] - 'a'] >= x) {
                ctr++;
                x = i + 1;
            }
            chars[s[i] - 'a'] = i + 1;
        }
        return ctr;
    }
};

// or

class Solution {
public:
    int partitionString(string s) {
        int ctr = 0;
        unordered_map<char, int> mp;
        for(auto&i : s) {
            mp[i]++;
            if(mp[i] > 1) {
                ctr++;
                mp.clear();
                mp[i]++;
            }
        }
        return ctr + 1;
    }
};