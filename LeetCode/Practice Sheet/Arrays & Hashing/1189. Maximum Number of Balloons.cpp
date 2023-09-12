class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0, a = 0, l = 0, o = 0, n = 0;
        for(auto c : text) {
            b += (c == 'b');
            a += (c == 'a');
            l += (c == 'l');
            o += (c == 'o');
            n += (c == 'n');
        }
        return min({b, a, n, l/2, o/2});
    }
};