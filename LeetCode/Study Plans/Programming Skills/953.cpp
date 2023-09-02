class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> weight;
        for(int i = 0; i < 26; i++)
            weight[order[i]] = i;
        int n = words.size();
        for(int i = 1; i < n; i++)
            if(compare(words[i - 1], words[i], weight))
                return 0;
        return 1;
    }
    bool compare(string &w1, string &w2, unordered_map<char, int> &weight) {
        for(int j = 0; j < min(w1.size(), w2.size()); j++)
            if(weight[w1[j]] != weight[w2[j]])
                return weight[w1[j]] > weight[w2[j]];
        return w1.size() > w2.size();
    }
};
