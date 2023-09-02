class Solution {
public:
    int subtractProductAndSum(int n) {
        int sums = 0, prods = 1;
        while(n) {
            int digit = n % 10;
            sums += digit;
            prods *= digit;
            n /= 10;
        }
        return prods - sums;
    }
};
