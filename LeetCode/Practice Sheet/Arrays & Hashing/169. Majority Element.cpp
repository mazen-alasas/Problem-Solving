class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

// or

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        for(int i = 0; i < nums.size(); i++) {
            counter[nums[i]]++;
            if(counter[nums[i]] > nums.size() / 2)
                return nums[i];
        }
        return 0;
    }
};

// or

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> counter;
        for(int n : nums)
            if(++counter[n] > nums.size() / 2)
                return n;
        return 0;
    }
};
