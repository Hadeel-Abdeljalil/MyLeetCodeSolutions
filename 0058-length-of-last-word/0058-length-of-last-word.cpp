class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int size=s.size()-1;
        //skip the spaces in the end of the string
        while(s[size]==' '){
            size--;
        }
      for(int i=size;i>=0;i--){
          if(s[i] !=' '){
              count++;
          }
          else break;
      } 
        return count;
    }
};