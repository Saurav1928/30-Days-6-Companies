class Solution {
public:
bool isOperator(string ch)
{
    return ch=="+"||ch=="-"||ch=="*"||ch=="/";
}
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(int i=0;i<tokens.size();i++)
        {
            long long a, b, c;
            if(isOperator(tokens[i]))
            {
               a=stoi(st.top()); st.pop();
               b=stoi(st.top()); st.pop();
               if(tokens[i]=="+")
               c=a+b;
               else   if(tokens[i]=="-")
               c=b-a;
                else   if(tokens[i]=="*")
               c=a*b;
                else   if(tokens[i]=="/")
               c=b/a;
               st.push(to_string(c));
            }
            else
            st.push(tokens[i]);
        }
        return stoi(st.top());
    }
};
