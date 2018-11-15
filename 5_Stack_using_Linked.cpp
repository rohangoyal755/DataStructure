#include <iostream>

using namespace std;

struct node
{
    int v;
    struct node *n;
}*start=NULL;

struct node *create(int val)
{
    struct node *temp;
    temp=new(struct node);
    temp->v=val;
    temp->n=NULL;
    return temp;
}

void push()
{
    int val;
    cin>>val;
    struct node *p=create(val);
    if(start==NULL)
    {
        start=p;
        p->n=NULL;
    }
    else
    {
        p->n=start;
        start=p;
    }
}

void pop()
{
    struct node *t=start;
    if(start==NULL)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else if(start->n==NULL)
    {
        start=NULL;
    }
    else
    {
        start=start->n;
        t->v=NULL;
        t->n=NULL;
    }
}

void peek()
{
    cout<<start->v<<endl;
}

int main()
{
cout<<"Enter 'a' to push, 'b' to pop, 'c' to peek & 'x' to exit the menu"<<endl;
char ch;
cin>>ch;
while(ch!='x')
{
switch(ch)
{
case 'a':
push();
break;
case 'b':
pop();
break;
case 'c':
peek();
break;
}
cout<<"Enter your choice"<<endl;
cin>>ch;
}
return 0;
}
