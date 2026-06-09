#include<iostream>
#include<stack>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^'  )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int postEval(string exp)
{
    stack<int> s;

    for(int i = 0; i < exp.length(); i++)
    {   
       char  ch = exp[i];
        if(ch >= '0' && ch <= '9'){
            s.push(ch - '0');  
        }  
    
    else if(isOperator(ch))
    {
        int val1 = s.top(); 
        s.pop();
        int val2 = s.top();
        s.pop();

        switch(ch)
        {
            case '+' :
                  s.push(val2 + val1);
                  break;
            
            case '-' :
                  s.push(val2 - val1);  
                  break;
                  
            case '*' :
                  s.push(val2 * val1);
                  break;
            
            case '/' :
                  s.push(val2 / val1);  
                  break;

            case '^' :
                  s.push(val2 ^ val1);
                  break;      
        }
    }

    }
int result = s.top();
s.pop();
return result;
}



int main()
{
    string s1;
    cout<< "Enter the Postfix Expression for Evaluation: ";
    cin>> s1 ;
    
    cout<<"The postfix evaluation of "<<s1 <<" is : " <<postEval(s1);
    return 0;
}