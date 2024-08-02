class Solution {
    //sliding window
public:
    int minSwaps(vector<int>& nums) {
       int total_ones = count(nums.begin(), nums.end(), 1);
        
        int n = nums.size();
        vector<int> extended_nums(nums.begin(), nums.end());
        extended_nums.insert(extended_nums.end(), nums.begin(), nums.end());
        
        int current_ones = 0;
        for (int i = 0; i < total_ones; ++i) {
            current_ones += extended_nums[i];
        }
        
        int max_ones_in_window = current_ones;
        
        for (int i = 1; i < n; ++i) {
            current_ones = current_ones - extended_nums[i-1] + extended_nums[i + total_ones - 1];
            max_ones_in_window = max(max_ones_in_window, current_ones);
        }

        int min_swaps = total_ones - max_ones_in_window;
        
        return min_swaps;
    }
};