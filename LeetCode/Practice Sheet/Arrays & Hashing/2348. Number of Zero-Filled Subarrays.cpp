class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ctr = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                ctr++;
                ans += ctr;
            }
            else
                ctr = 0;
        }
        return ans;
    }
};

// or

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ctr = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++)
            (nums[i] == 0) ? ctr++, ans += ctr : ctr = 0;
        return ans;
    }
};