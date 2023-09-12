class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, freq_s(26), freq_p(26);
        if (s.size() < p.size()) 
            return ans;
        for (int i = 0; i < p.size(); i++)
            freq_s[s[i] - 'a']++,freq_p[p[i] - 'a']++;
        for (int i = 0; i < s.size() - p.size(); ++i) {
            if (freq_s == freq_p)
                ans.push_back(i);
            freq_s[s[i] - 'a']--;
            freq_s[s[i + p.size()] - 'a']++;
        }
        if (freq_s == freq_p)
            ans.push_back(s.size() - p.size());
        return ans;
    }
};
