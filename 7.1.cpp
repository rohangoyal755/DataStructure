#include <iostream>

using namespace std;

#define n 10

void enqueue(int a[],int &r,int &f)
{
    int v;
    cin>>v;
    if((r==n-1 && f==0) || (r==f-1))
    {
        cout<<"Overflow"<<endl;
    }
    else if(r==n-1 && f!=0)
    {
        r=0;
        a[r]=v;
    }
    else if(r==-1 && f==-1)
    {
        r++;
        a[r]=v;
        f++;
    }
    else
    {
        r++;
        a[r]=v;
    }
}

void dequeue(int a[],int &r,int &f)
{
    if(r==-1 && f==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else if(f==n-1 && f!=r)
    {
        f=0;
    }
    else
    {
        f++;
    }
}

void display(int a[], int r, int f)
{
int temp=f;
while(temp!=r)
{
cout<<a[temp++]<<" ";
if(temp==n && r!=n-1)
temp=0;
}
cout<<a[temp];
cout<<endl;
}

int main()
{
int a[n];
int r=-1,f=-1;
cout<<"Enter 'a' for insertion, 'b' for deletion, 'c' to display & 'x' to exit the menu"<<endl;
char ch;
cin>>ch;

while(ch!='x')
{
switch(ch)
{
case 'a':
enqueue(a,r,f);
break;
case 'b':
dequeue(a,r,f);
break;
case 'c':
display(a,r,f);
break;
}
cout<<"Enter your choice"<<endl;
cin>>ch;
}

return 0;
}
