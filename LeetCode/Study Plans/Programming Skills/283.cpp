class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> v(nums.size());
        for(int i = 0, j = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                v[j] = nums[i];
                j++;
            }
        }
        for(int i = 0; i < nums.size(); i++)
            nums[i] = v[i];
    }
};

// or

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> v(nums.size());
        for(int i = 0, j = 0; i < nums.size(); i++) {
            if(nums[i] != 0){
                v[j] = nums[i];
                j++;
            }
        }
        nums = v;
    }
};
