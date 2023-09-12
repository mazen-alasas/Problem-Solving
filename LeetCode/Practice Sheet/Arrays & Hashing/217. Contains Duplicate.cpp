// O(n^2) --> Time Limit Exceeded
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int ctr = 0;
        for(int i = 0; i < nums.size(); i++){
            int now = nums[i];
            for(int j = 0; j < nums.size(); j++){
                if(i == j)
                    continue;
                if(nums[j] == now)
                    ctr++;
            }
            if(ctr)
                return 1;
        }
        return 0;
    }
};
// O(nlogn)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1])
                return 1;
        }
        return 0;
    }
};

// O(nlogn)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> s;
        for(int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);
        return (nums.size() != s.size());
    }
};

// O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,int> m;
        for(int i = 0; i < nums.size(); i++){
            if(!m[nums[i]])
                m[nums[i]]++;
            else
                return 1;
        }
        return 0;
    }
};
