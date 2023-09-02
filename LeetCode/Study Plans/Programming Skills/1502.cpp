class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int difference = abs(arr[0] - arr[1]);
        for(int i = 2; i < arr.size(); i++) {
            if(abs(arr[i] - arr[i - 1]) != difference)
                return 0; // false
        }
        return 1; // false
    }
};
