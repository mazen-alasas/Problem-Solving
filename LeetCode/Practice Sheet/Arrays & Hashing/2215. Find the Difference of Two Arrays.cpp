class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dif(2);
        for(auto num : nums1) {
            if(count(nums2.begin(), nums2.end(), num) == 0 && count(dif[0].begin(), dif[0].end(), num) == 0)
                dif[0].push_back(num);
        }
        for(auto num : nums2) {
            if(count(nums1.begin(), nums1.end(), num) == 0 && count(dif[1].begin(), dif[1].end(), num) == 0)
                dif[1].push_back(num);
        }
        return dif;
    }
};