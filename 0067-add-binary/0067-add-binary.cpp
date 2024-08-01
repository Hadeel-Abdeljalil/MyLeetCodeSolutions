class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int carry=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(carry>0 || i>=0 || j>=0){
            int sum=carry;
            if(i>=0){
                sum+= a[i--] -'0';
            }
            if(j>=0){
                sum+= b[j--] -'0';
            }
            res+=(sum%2) +'0';//to convert the numbers to string by adding '0' which is a char
            carry=sum /2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};