class Solution {
public:
    bool isPalindrome(int x) {
        long copyX = x;
        long revN = 0;
        int lastD = 0;
        while (x>0) {
            lastD = x % 10;
            revN = (revN * 10) + lastD;
            x = x / 10;
        }
        if (copyX == revN)
            return true;
        else
            return false;
    }
};