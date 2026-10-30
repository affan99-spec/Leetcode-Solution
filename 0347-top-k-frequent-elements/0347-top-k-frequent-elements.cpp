class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++) {
            mpp[nums[i]]++;
        } 
        vector<pair<int, int>> freq;
        for(auto& pair : mpp) {
            freq.push_back({pair.second, pair.first});
        }
        sort(freq.rbegin(), freq.rend());
        for(int i=0; i<k && i<freq.size(); i++) {
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};