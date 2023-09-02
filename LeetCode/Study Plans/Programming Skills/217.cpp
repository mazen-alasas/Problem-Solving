class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1])
                return 1;
        }
        return 0;
    }
};

// or

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);
        return (nums.size() != s.size());
    }
};

// or

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            if(!mp[nums[i]])
                mp[nums[i]]++;
            else
                return 1;
        }
        return 0;
    }
};

// or

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]])
                return true;
            mp[nums[i]]++;
        }
        return false;
    }
};