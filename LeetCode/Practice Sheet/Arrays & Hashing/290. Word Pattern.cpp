class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map <char, string> m1;
        map <string, char> m2;

        vector <string> v;  
        stringstream is(s);
        string word;
        while (is >> word)
            v.push_back(word);

        for (int i = 0; i < pattern.size(); i++){
            string word = v[i];
            if (m1[pattern[i]] != "" && m1[pattern[i]] != word)
                return false;
            if (m2[word] && m2[word] != pattern[i])
                return false;
            m1[pattern[i]] = word;
            m2[word] = pattern[i];
        }
        return v.size() != pattern.size() ? false : true;
    }
};
