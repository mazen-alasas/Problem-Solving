class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int &a, int &b){
            bitset<32> x(a);
            bitset<32> y(b);
            if(x.count() != y.count())
                return x.count() < y.count();
            else  
                return a < b;
        });
        return arr;
    }
};

// or

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int &a, int &b){
            bitset<32> x(a);
            bitset<32> y(b);
            return (x.count() != y.count()) ? x.count() < y.count() :  a < b;
        });
        return arr;
    }
};