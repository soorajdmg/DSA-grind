class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        int top=-1;
        char ch = '0';
        for (int i=0;i<size(s);i++) {
            ch = s[i];
            if (ch=='(' || ch=='[' ||ch=='{') {
                stk.push(ch);
            }
            else {
                if (stk.empty()) return false;
                char t = stk.top();
                if ((ch==')' &&t=='(') ||(ch==']' &&t=='[')||(ch=='}'&&t=='{')){
                    stk.pop();
                }
                else {
                    return false;
                }
            }
        }    
        return stk.empty();
    }
};