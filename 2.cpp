#include<iostream>
using namespace std;
int main()
{

	int a[10], i, num, n, c=0, p;
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"Enter the Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the number you want to search : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			c=1;
			p=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at position "<<p;
	}
return 0;
}

