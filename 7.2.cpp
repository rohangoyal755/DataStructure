#include <iostream>

using namespace std;

struct node
{
    int v;
    struct node *n;
}*f=NULL,*r=NULL;

struct node *create(int val)
{
    struct node *temp;
    temp=new (struct node);
    temp->v=val;
    temp->n=NULL;
    r=temp;
    return temp;
}

void enqueue()
{
    int val;
    cin>>val;
    struct node *t=f;
    struct node *p=create(val);
    if(f==NULL)
    {
        f=p;
        r=p;
    }
    else
    {
        while(t->n!=NULL)
        {
            t=t->n;
        }
        t->n=p;
        p->n=NULL;
    }
}

void dequeue()
{
    struct node *t=f;
    if(f->n!=NULL)
    {
        t=f;
        f=f->n;
        t->n=NULL;
    }
    else
    {
        f=NULL;
    }
}

void display()
{
    struct node *t=f;
    while(t!=NULL)
    {
        cout<<t->v<<" ";
        t=t->n;
    }
    cout<<endl;
}

int main()
{
cout<<"Enter 'a' for insertion, 'b' for deletion, 'c' to display & 'x' to exit the menu"<<endl;
char ch;
cin>>ch;

while(ch!='x')
{
switch(ch)
{
case 'a':
enqueue();
break;
case 'b':
dequeue();
break;
case 'c':
display();
break;
}
cout<<"Enter your choice"<<endl;
cin>>ch;
}
return 0;
}
