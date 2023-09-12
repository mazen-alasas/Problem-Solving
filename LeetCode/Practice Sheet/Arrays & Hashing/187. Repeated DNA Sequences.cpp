// O(n)
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> mp;
        vector<string> v;
        string t = "";
        for (auto x : s) {
            t += x;
            if (t.size() == 10) {
                if (mp[t] == 1)
                    v.push_back(t);
                mp[t]++;
                t = t.substr(1, t.size());
            }
        }
        return v;
    }
};
