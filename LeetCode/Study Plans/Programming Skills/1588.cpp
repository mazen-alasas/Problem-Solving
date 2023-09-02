class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        for(int i = 1; i < arr.size(); i++)
            arr[i] += arr[i - 1];
        int summition = arr[arr.size() - 1];
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i + 2; j < arr.size(); j += 2) {
                if(i == 0)
                    summition += arr[j];
                else
                    summition += arr[j] - arr[i - 1];
            }
        }
        return summition;
    }
};
