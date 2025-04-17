class Solution {
    public boolean areOccurrencesEqual(String s) {
        HashMap<Character, Integer> map= new HashMap<>();

        for(char c : s.toCharArray()){
            map.put(c, map.getOrDefault(c, 0)+1);
        }
        int keep =-1;
        for(int value : map.values()){
            if(keep == -1){
                keep =value;
            }
            if(keep != value){
                return false;
            }    
        }
        return true;
    }
}