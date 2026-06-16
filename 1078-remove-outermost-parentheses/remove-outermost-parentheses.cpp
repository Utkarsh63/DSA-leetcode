class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth = 0;
        string res = "";
        for(char c : s){
            if(c == '('){
                if(depth > 0){
                    res.push_back('(');
                    
                }
               depth += 1; 
            }
            else if(c == ')'){
                depth -= 1;
                if(depth > 0){
                    res.push_back(')');
                }
                
            }
        }
        return res;
    }
};