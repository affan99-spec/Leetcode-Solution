class Solution {
public:

    // int firstIndex(vector<int>& nums, int target) {
    //    int ans = -1;
    //    int low = 0;
    //    int high = nums.size() - 1;
    //    while(low < high ){
    //         int mid = (low + (high - low)) / 2;
    //         if(nums[mid] == target){
    //             ans = mid;
    //             high = mid - 1;
    //         }
    //         else if(nums[mid] > target){
    //             high = mid - 1;
    //         }
    //         else {
    //             low = mid + 1;
    //         }
    //    }
    //    return ans; 
    // }

    int FindIndex(vector<int>& nums, int low, int high, int target) {
       while(low <= high ){
            int mid = (low + high) / 2;
            if(nums[mid] < target){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
       }
       return low; 
    }

    
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0; int high = nums.size() - 1;
        if(nums.size() == 0){
            return {-1, -1};
        }
        int first = FindIndex(nums, low, high, target);
        if(first == -1){
            return {-1, -1};
        }
        int second = FindIndex(nums, low, high, target + 1) - 1;
        if(first < nums.size() && nums[first] == target) {
            return {first, second};
        }
        return {-1, -1};
    }
};