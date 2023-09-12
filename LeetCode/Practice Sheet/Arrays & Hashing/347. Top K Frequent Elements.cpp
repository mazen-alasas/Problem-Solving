class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> mp;
        for (auto x : nums)
            mp[x]++;
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto [k, v] : mp)
            buckets[v].push_back(k);
        vector<int> vec;
        for (int i = nums.size(); i >= 0; i--) {
            if (vec.size() >= k)
                break;
            vec.insert(vec.begin(), buckets[i].begin(), buckets[i].end());
        }
        return vec;
    }
};
