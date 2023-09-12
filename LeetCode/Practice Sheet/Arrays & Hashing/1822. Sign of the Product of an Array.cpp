class Solution {
public:
    int arraySign(vector<int>& nums) {
        int numberOfNegativeNumbers = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                return 0;
            if (nums[i] < 0)
                numberOfNegativeNumbers++;
        }
        return numberOfNegativeNumbers % 2 ? -1 : 1; 
    }
};