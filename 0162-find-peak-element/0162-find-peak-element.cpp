class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0, h = nums.size() -1;
        int maxele = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxele = max(maxele, nums[i]);
        }
        while(l <= h) {
            int mid = l + (h-l) / 2;
            if(nums[mid] == maxele) {
                return mid;
            } else if(nums[l] == maxele){
                return l;
            }
            else{
                l++;
            }
        }
        return 0;
    }
};