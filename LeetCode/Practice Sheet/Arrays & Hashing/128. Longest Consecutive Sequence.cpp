class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max_seq = 1, ctr = 1;
        for(int i = 1; i < (int)nums.size(); i++) {
            if(nums[i] - nums[i - 1] == 1) {
                ctr++;
                max_seq = max(max_seq, ctr);
            }
            else if(nums[i] == nums[i - 1])
                continue;
            else
                ctr = 1;
        }
        return (int)nums.size() ? max_seq : 0;
    }
};