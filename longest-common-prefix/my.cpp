class Solution {
public:
    bool compare(string str, string com){
        if(str.length() > com.length()) return false;
        bool flag =  true;
        for(int i = 0; i < str.length(); i++){
            if(str[i] != com[i]) return false;
        }
        return true;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string str = "";
        string start = strs[0];
        for(int i = 0; i < start.length(); i++){
            string tmp = str + start[i];
            bool flag = true;
            for(int j = 1; j < strs.size(); j++){
                if(!compare(tmp, strs[j])){
                    flag = false;
                    break;
                }
            }
            if(flag){
                str = tmp;
            }else{
                return str;
            }
        }
        
        return str;
    }
};