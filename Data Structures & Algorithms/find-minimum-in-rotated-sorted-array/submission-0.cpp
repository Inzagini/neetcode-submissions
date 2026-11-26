class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0, j = nums.size() - 1;
        int res{nums[0]};
        while (i <= j){

            //sorted from left to right
            if (nums[i] < nums[j]){
                res = min(res, nums[i]);
                break;
            }
            
            int mid = (j + i) / 2;
            res = min(nums[mid], res);

            
            if (nums[mid] >= nums[i]){
                i = mid + 1;
            }
             else {
                j = mid - 1;
            }
        }
    return res;
    }
};
