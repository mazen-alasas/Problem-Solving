// O(n)
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> freq(nums.size() + 1);
        for(auto element : nums)
            freq[element]++;
        vector <int> v;
        for(int i = 1; i <= nums.size(); i++)
            if(!freq[i])
                v.push_back(i);
        return v;
    }
};
