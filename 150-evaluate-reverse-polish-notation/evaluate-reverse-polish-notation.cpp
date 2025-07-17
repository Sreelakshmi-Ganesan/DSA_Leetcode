class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>rpn;
        int n=tokens.size();
        
        for(string tok : tokens)
        {
            if(tok=="+" ||tok=="-" ||tok=="*" ||tok=="/" )
            {   
                int x=stoi(rpn.top());
                rpn.pop();
                int y=stoi(rpn.top());
                rpn.pop();
                string sign= tok;
                if(sign=="+")
                {
                    rpn.push(to_string(x+y));
                }
                else if(sign=="-")
                {
                    rpn.push(to_string(y-x));
                }
                else if(sign=="*")
                {
                    rpn.push(to_string(x*y));
                }
                else
                {
                    rpn.push(to_string(y/x));
                }
                
            }

            else {
                rpn.push(tok);
            }
        }
        return stoi(rpn.top());
    }
};