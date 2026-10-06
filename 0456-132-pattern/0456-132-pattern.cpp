class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();

        if (n < 3) {
            return false;
        }

        vector<int> st;
        int second = INT_MIN;

        for (int i = n - 1; i >= 0; i--) {

            // nums[i] is the "1"
            if (nums[i] < second) {
                return true;
            }

            // Find the "2"
            while (!st.empty() && nums[i] > st.back()) {
                second = st.back();
                st.pop_back();
            }

            // Store possible "3"
            st.push_back(nums[i]);
        }

        return false;
    }
};