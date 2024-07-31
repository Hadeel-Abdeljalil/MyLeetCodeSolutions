class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();        
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0; // Set the current digit to 0 and continue to carry
        }
        
        // If we exit the loop, it means all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};