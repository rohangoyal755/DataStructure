#include <iostream>

using namespace std;

#define n 100

class Stack
{
    int t=-1;
    int a[n];
public:
    void push()
    {
	int x;
	cin>>x;
        if(t==n-1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            t=t+1;
            a[t]=x;
        }
    }
    void pop()
    {
        if(t<0)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            a[t]=NULL;
            t--;
        }
    }
    void peek()
    {
        if(t<0)
        {
            cout<<"Empty Stack"<<endl;
        }
        else
        {
            cout<<a[t]<<endl;
        }
    }
    bool isEmpty()
    {
        if(t<0)
            return 1;
        else
            return 0;
    }
};

int main()
{
Stack s;
cout<<"Enter 'a' to push, 'b' to pop, 'c' to peek & 'x' to exit the menu"<<endl;
char ch;
cin>>ch;
while(ch!='x')
{
switch(ch)
{
case 'a':
s.push();
break;
case 'b':
s.pop();
break;
case 'c':
s.peek();
break;
}
cout<<"Enter your choice"<<endl;
cin>>ch;
}

return 0;
}
