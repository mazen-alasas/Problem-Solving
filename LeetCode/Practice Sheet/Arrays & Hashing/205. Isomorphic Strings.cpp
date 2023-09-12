class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for (int i = 0; i < s.length(); i++)
            if (s.find(s[i]) != t.find(t[i]))
                return 0;
        return 1;
    }
};
