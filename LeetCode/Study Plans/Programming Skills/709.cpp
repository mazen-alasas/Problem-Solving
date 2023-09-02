class Solution {
public:
    string toLowerCase(string s) {
        for (auto &ch : s)
            ch = tolower(ch);
        return s;
    }
};

// or 

class Solution {
public:
    string toLowerCase(string s) {
        for (auto &ch : s)
            ch <= 'Z' && ch >= 'A' ? ch += 32 : ch;
        return s;
    }
};
