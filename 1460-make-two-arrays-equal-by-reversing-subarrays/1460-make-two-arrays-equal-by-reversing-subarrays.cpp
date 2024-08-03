class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> count(1001, 0); 
        for (int c : target) {
            count[c]++;
        }
        for (int c : arr) {
            if (count[c] == 0) {
                return false;
            }
            count[c]--;
        }
        return true;
    }
};