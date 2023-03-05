class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for (int i=0; i<s.size(); ++i){
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') open.push(c);
            else if (!open.empty() && 
                    ((c == ')' && open.top() == '(') ||
                    (c == '}' && open.top() == '{') ||
                    (c == ']' && open.top() == '['))) open.pop();
            else return false;
        }
        if (!open.empty()) return false;
        return true;
    }
};
