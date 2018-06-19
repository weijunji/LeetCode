class Solution {
public:
    int myAtoi(string str) {
        string::iterator iter = str.begin();
        int num = 0;
        int last = 0;
        int last2 = 0;
        int sign = 1;
        while(iter != str.end() && *iter == ' '){
            iter++;
        }
        
        if(*iter == '+'){
            sign = 1;
        }else if(*iter == '-'){
            sign = -1;
        }else if(*iter >= '0' && *iter <= '9'){
            num += *iter - '0';
        }else{
            return 0;
        }
        if(iter != str.end()){
            iter++;
        }
        
        int count = 0;
        bool notZero = false;
        if(num != 0){
            notZero = true;
        }
        while(iter != str.end()){
            last2 = last;
            last = num;
            if(*iter >= '0' && *iter <= '9'){
                num *= 10;
                num += *iter - '0';
            }else{
                break;
            }
            iter ++;
            if(notZero){
                count ++;
            }
            if(count > 10){
                break;
            }
        }
        if(num / 10 == last || num / 10 == last2){
            return num * sign;
        }else{
            if(sign > 0){
                return 2147483647;
            }else{
                return -2147483648;
            }
        }
    }
};
