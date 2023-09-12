// O(n log n)
bool com(string s1, string s2) {
    return s1 + s2 > s2 + s1;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> Nnums;
        for (int i = 0; i < nums.size(); i++)
            Nnums.push_back(to_string(nums[i]));

        sort(Nnums, Nnums + nums.size(), com);
        
        string ans = "";
        for (auto x : Nnums)
            ans += Nnums[i];
        return (Nnums[0] == "0") ? "0" : ans;
    }
};
