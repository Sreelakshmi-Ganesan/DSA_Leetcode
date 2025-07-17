class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>rpn;
        int n=tokens.size();
        
        for(string tok : tokens)
        {
            if(tok=="+" ||tok=="-" ||tok=="*" ||tok=="/" )
            {   
                int x=rpn.top();
                rpn.pop();
                int y=rpn.top();
                rpn.pop();
                string sign= tok;
                if(sign=="+")
                {
                    rpn.push(x+y);
                }
                else if(sign=="-")
                {
                    rpn.push(y-x);
                }
                else if(sign=="*")
                {
                    rpn.push(x*y);
                }
                else
                {
                    rpn.push(y/x);
                }
                
            }

            else {
                rpn.push(stoi(tok));
            }
        }
        return rpn.top();
    }
};