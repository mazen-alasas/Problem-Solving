class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> freq(10e4 + 1), answer;
        for(auto i : nums)
            freq[i + 5e4]++;
        for(int j = 0; j < freq.size(); j++) {
            while(freq[j]--)
                answer.push_back(j - 5e4);
		}
        return answer;
    }
};