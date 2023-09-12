// O(n)
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int s = arr.size();
        vector <int> v(s, -1);
        for(int i = s - 1; i > 0; i--){
            v[i-1] = max(v[i], arr[i]);
        }
        return v;
    }
};
// O(n) no extra space
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), temp, mx = -1;
        for(int i = n - 1; i >= 0; i--){
            temp = arr[i];
            arr[i] = mx;
            mx = max(mx, temp);
        }
        return arr;
    }
};
