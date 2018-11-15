#include<iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
for(int i=1;i<n;i++)
{
int key=a[i];
for(int j=i-1;j>=0;j--)
{
if(a[j]>key)
{
a[j+1]=a[j];
a[j]=key;
}
else
break;
}
}
}

void display(int a[], int n)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}

int main()
{
cout<<"Enter the size of array"<<endl;
int n;
cin>>n;
int a[n+1];
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];

insertion_sort(a,n);

cout<<"Sorted array is"<<endl;
display(a,n);

cout<<"Enter the element to be inserted"<<endl;
int e;
cin>>e;
a[n]=e;

insertion_sort(a,n+1);

cout<<"After insertion"<<endl;
display(a,n+1);

return 0;
}
