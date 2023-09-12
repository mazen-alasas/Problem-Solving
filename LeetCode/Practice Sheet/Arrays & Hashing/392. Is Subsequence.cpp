// O(n)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int h = 0;
        if(s.size() == t.size() && s == t)
            return 1;
        for(int i = 0, j = 0; i < t.size(); i++){
            if(t[i] == s[j]){
                j++;
                h++;
            }
            if(h == s.size())
                return 1;
        }
        return 0;
    }
};
// O(n)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        for (int i = 0, j = 0; i < m && j < n; i++)
            if (s[j] == t[i])
                j++;
        return (j == n);
    }
};
// O(n) treating subsequence string as a stack
class Solution {
    public:
        bool isSubsequence(string s, string t) {        
            for(int i = t.size()-1; i >= 0 && !s.empty(); i--)
                if (t[i] == s[s.size() - 1]) 
                    s.pop_back(); 
            return s.empty();
        }
};
