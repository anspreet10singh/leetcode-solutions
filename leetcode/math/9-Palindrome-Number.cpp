class Solution {
public:
    int revNum(int x) {
       int rev = 0;

       while(x) {
        int rem = x % 10;
        if (rev > INT_MAX/10 || rev < INT_MIN/10) {
            return 0;
        }
        rev = rev * 10 + rem;
        x /= 10;
       }

       return rev;
    }

    bool isPalindrome(int x) {
        if (x < 0) return false;

        int rev = revNum(x);
        return x == rev;
    }
};