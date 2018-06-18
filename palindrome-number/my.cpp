class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int last = 0;
        while(x != 0){
            last = result;
            result *= 10;
            result += x % 10;
            x /= 10;
        }
        if(result / 10 != last){
            return 0;
        }else{
            return result;
        }
    }

    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(reverse(x) == x){
            return true;
        }else{
            return false;
        }
    }
};
