class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder res= new StringBuilder();
        Stack<Character> stack= new Stack<>();
        for(char c : s.toCharArray()){
            if(c == '('){
                if(!stack.isEmpty()){
                    res.append(c);
                }
                stack.push(c);
            }else if (c == ')'){
                stack.pop();
                if(!stack.isEmpty()){
                res.append(c);
                }
            }
        }
        return res.toString();
    }
}