// O(nlogn) Sorting
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return ( s == t ); 
    }
};
// O(n) using hash table
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for (auto x : mp)
            if (x.second) 
                return false;
        return true;
    }
};
// O(n) using frequency char array (simulate the unordered_map)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++) { 
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (freq[i]) 
                return false;
        return true;
    }
};
