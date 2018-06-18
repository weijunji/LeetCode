class Solution {
public:
    // 2147483647
    int reverse(int x) {
        int sign = 1;
        if(x < 0){
            sign = -1;
            x = -x;
        }
        int result = 0;
        int last = 0;
        while(x != 0){
            last = result;
            result *= 10;
            result += x % 10;
            x /= 10;
        }
        // use last to check overflow.
        // If a number times 10 and then divids 10 not equal to itself, then overflow.
        // Idea by zhihu-vzch(https://www.zhihu.com/question/30424066)
        if(result / 10 != last){
            return 0;
        }else{
            return result * sign;
        }
    }
};
