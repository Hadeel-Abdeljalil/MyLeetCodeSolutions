class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
         unordered_map<string, int> frequency;
    
    for (const string& str : arr) {
        frequency[str]++;
    }
    
    for (const string& str : arr) {
        if (frequency[str] == 1) {
            k--;
            if (k == 0) {
                return str;
            }
        }
    }
    
    return "";
    }
};