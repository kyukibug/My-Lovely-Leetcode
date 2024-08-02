class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for(auto i : tokens){
            if(i == "+"||i == "-"||i == "*"||i == "/"){
                int temp1, temp2;
                  switch (i[0]){
                case '+':
                    temp1 = nums.top();
                    nums.pop();
                    temp2 = nums.top();
                    nums.pop();
                    nums.push(temp2 + temp1);
                    break;
                case '-':
                    temp1 = nums.top();
                    nums.pop();
                    temp2 = nums.top();
                    nums.pop();
                    nums.push(temp2 - temp1);
                    break;
                case '*':
                    temp1 = nums.top();
                    nums.pop();
                    temp2 = nums.top();
                    nums.pop();
                    nums.push(temp2 * temp1);
                    break;
                case '/':
                    temp1 = nums.top();
                    nums.pop();
                    temp2 = nums.top();
                    nums.pop();
                    nums.push(temp2/temp1);
                    break;
            }
            }
            else
                nums.push(stoi(i));
        
    }
    return nums.top();}
};