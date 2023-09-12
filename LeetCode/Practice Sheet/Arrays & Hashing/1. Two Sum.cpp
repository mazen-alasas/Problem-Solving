// O(n ^ 2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> answer(2);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j)
                    continue;
                if(nums[i]+nums[j] == target){
                    answer[0]=j;
                    answer[1]=i;
                }
            }
        }
        return answer;
    }
};
