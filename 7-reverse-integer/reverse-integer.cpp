class Solution {
public:
    int reverse(int x) {
        long revN = 0;
        int lastDigit = 0;
        while (x) {
            lastDigit = x % 10;
            revN = (revN * 10) + lastDigit;
            x = x / 10;
        }
        if(revN < INT_MIN || revN > INT_MAX) return 0;
        return revN;
    }
};