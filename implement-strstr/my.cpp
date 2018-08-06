class Solution {
private:
    bool compare(int index, string haystack, string needle){
        for(int i = 0; i < needle.length(); i++, index++){
            if(haystack[index] != needle[i]){
                return false;
            }
        }
        return true;
    }

public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[0]){
                if(compare(i, haystack, needle)) return i;
            }
        }
        return -1;
    }
};