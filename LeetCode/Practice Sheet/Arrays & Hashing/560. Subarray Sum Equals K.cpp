class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = 1;
        int sum = 0, answer = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int f = sum - k;
            if(mp.find(f) != mp.end())
                answer += mp[f];
            mp[sum]++;
        }
        return answer;
    }
};