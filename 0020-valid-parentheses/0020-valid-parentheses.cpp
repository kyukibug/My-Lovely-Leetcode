class Solution {
public:
    bool isValid(string s) {
        std::stack<char> myStack;
        for(char i : s){
            if(i == '(')
                myStack.push(')');
            else if(i == '{')
                myStack.push('}');
            else if(i == '[')
                myStack.push(']');
            else{
                if(myStack.empty() || i != myStack.top())
                    return false;
                myStack.pop();
            }
        }
        if(myStack.empty())
            return true;
        return false;
    }
};