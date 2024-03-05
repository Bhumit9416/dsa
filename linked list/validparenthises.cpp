#include <iostream>
#include <stack>
using namespace std;
bool bh(string expression)
{
    stack <char> st;
    for (int i=0; i<expression.size(); i++)
    {
        char ch = expression[i];

        //if opening bracket, stack push
        if(ch == '(' || ch == '{'  || ch == '[')
        {
            st.push(ch);
        }
        //for closing brackets
        else
        {
            if(!st.empty())
            {
                char top = st.top();
                if((ch == ')' && top == '(')  || (ch == '}' && top == '{')|| ( ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else 
            {
                return false; 
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    string a = "({[]}})";
    if(bh(a))
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Unbalanced";
    }

    return 0;
}