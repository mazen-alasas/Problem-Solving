class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i >= 0; i--){
            if(digits[i] == 9)
                digits[i] = 0;
            else{
                digits[i] += 1;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

// or

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(i >= 0 && digits[i] == 9)
            digits[i--] = 0;
        if(i >= 0)
            digits[i]++;
        else
            digits.insert(digits.begin(), 1);
        return digits;
    }
};