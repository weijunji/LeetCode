class Solution {
public:
    int search(vector<int>& nums, int l, int r, int target){
        if(r - l <= 1) {
            if(nums[l] == target) return l;
            else return r;
        }
        int mid = l + (r - l) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) return search(nums, l, mid, target);
        else return search(nums, mid, r, target);
    }
    
    int searchInsert(vector<int>& nums, int target) {
        if(nums[0] > target) return 0;
        return search(nums, 0, nums.size(), target);
    }
};