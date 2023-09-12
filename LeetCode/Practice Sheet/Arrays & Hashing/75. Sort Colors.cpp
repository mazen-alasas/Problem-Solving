// O(n^2)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) { 
                if (nums[i] > nums[j])
                    swap(nums[i], nums[j]);  
            }
        }
    }
};

// O(n log n)
class Solution {
public:
    void sortColors(vector<int>& nums) {
       sort(nums.begin(), nums.end());
    }
};

// O(n)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = nums.size() - 1, mid = 0;
        while (mid <= j){
            if (nums[mid] == 0){
                swap(nums[mid], nums[i]);
                i++;
                mid++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[j]);
                j--;
            }
        }
    }
};
