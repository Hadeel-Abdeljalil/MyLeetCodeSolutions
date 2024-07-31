class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        if (pos != string::npos) { /*(find) if it found the string, will return first index that string start at else it will return (string::npos)*/
            return pos;
        } else {
            return -1;
        }
    }
};
