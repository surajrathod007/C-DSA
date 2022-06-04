#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin>>str;

    stack<char> stack;
        
        for(int i = 0; i<str.size(); i++){
            
            if(str[i]=='(' || str[i]=='{' || str[i] =='[')
            {
                stack.push(str[i]);
            }
            
            if(str[i]==')' && stack.top() == '(')
            {
                stack.pop();
            }else if(str[i]=='}' && stack.top() == '{')
            {
                stack.pop();
            }else if(str[i] == ']' && stack.top() == '[')
            {
                stack.pop();
            }
        }
        
        if(stack.empty())
        {
            cout<<"Balenced";
        }else{
            cout<<"Unbalenced";
        }





    return 0;
}