class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto x : freq){
            if(x.second == 1){
                return x.first;
            }
        }
        return 0;
    }
};