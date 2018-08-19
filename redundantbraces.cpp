int Solution::braces(string A) {
    stack<char> s;
    for(int i=0;i<A.size();i++)
    {
        if((A[i]=='{')||(A[i]=='[')||(A[i]=='('))
        {
            s.push(A[i]);
        }
        else if((A[i]=='}')||(A[i]==']')||(A[i]==')'))
        {
            int top=s.top();
            s.pop();
            char sign=s.top();
            s.pop();
            if(sign=='+')
            {
                int bot=s.top();
                s.pop();
                s.pop();
                s.push(bot+top);
            }
            else if(sign=='-')
            {
                int bot=s.top();
                s.pop();
                s.pop();
                s.push(bot-top);
            }
            else if(sign=='*')
            {
                int bot=s.top();
                s.pop();
                s.pop();
                s.push(bot*top);
            }
            else if(sign=='/')
            {
                int bot=s.top();
                s.pop();
                s.pop();
                s.push(bot/top);
            }
            else {
                return 1;
            }
            
        }
    
        else{
            s.push(A[i]);
        }
    }
    return 0;
}
