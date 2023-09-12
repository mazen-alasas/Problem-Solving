class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i + needle.size() <= haystack.size(); i++)
            if(needle == haystack.substr(i, needle.size()))
                return i;
        return -1;
    }
};

// or

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle) == string::npos ? -1 : (int)haystack.find(needle);
    }
};

// or 

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};