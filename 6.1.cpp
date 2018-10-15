#include <iostream>

using namespace std;

int prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
    case '%':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}

int main()
{
cout<<"Enter the infix expression"<<endl;
    string s;
    getline(cin,s);
    char a[s.length()];
    int t=-1;
cout<<"The postfix expression is"<<endl;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
        {
            cout<<s[i];
        }
        else
        {
            if(prec(s[i])>=prec(a[t]) || t==-1 || s[i]=='(')
            {
                t++;
                a[t]=s[i];
            }
            else
            {
                if(s[i]!=')')
                {
                    while(a[t]!='(' && (prec(s[i])<prec(a[t])))
                    {
                        cout<<a[t];
                        t--;
                    }
                    t++;
                    a[t]=s[i];
                }
                else
                {
                    while(a[t]!='(')
                    {
                        cout<<a[t];
                        t--;
                    }
                    t--;
                }
            }
        }
    }

    while(t>=0)
    {
        if(a[t]!='(')
        {
            cout<<a[t];
        }
        t--;
    }
    return 0;
}
