class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "", s1, s2;
        int i = 0, len1, len2;
        if(word1.size() < word2.size()) {
            s1 = word1, len1 = word1.size();
            s2 = word2, len2 = word2.size();
        }
        else {
            s1 = word2, len1 = word2.size();
            s2 = word1, len2 = word2.size();
        }
        for(; i < len1; i++) {
            merged += word1[i];
            merged += word2[i];
        }
        merged += s2.substr(i);
        return merged;
    }
};

// or

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, j = 0;
        while (i < word1.size() || j < word2.size()) {
            i < word1.size() ? merged += word1[i] : merged;
            j < word2.size() ? merged += word2[j] : merged;
            i++, j++;
        }
        return merged;
    }
};

// or

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, j = 0;
        for (; i < word1.size() || j < word2.size(); i++, j++) {
            i < word1.size() ? merged += word1[i] : merged;
            j < word2.size() ? merged += word2[j] : merged;
        }
        return merged;
    }
};
