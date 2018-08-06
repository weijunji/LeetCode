class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int p = 1;
        for(int i = 1; i < nums.size(); i++){
            int num = nums[i];
            bool flag = true;
            for(int j = 0; j < p; j++){
                if(nums[j] == num) flag = false;
            }
            if(flag){
                nums[p] = num;
                p++;
            }
        }
        return p;
    }
};