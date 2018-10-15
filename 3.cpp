#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
for(int j=0;i<n;j++)
{
for(int i=0;i<n-1;i++)
{
if(a[i]>a[i+1])
{
int temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
cout<<"Sorted array is"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}

void binary_search(int arr[], int n, int e)
{
	int first = 0;
	int last = n-1;
	int middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < e)
		{
			first = middle + 1;

		}
		else if(arr[middle] == e)
		{
			cout<<e<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<e<<" is not present in the array";
	}
}

int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    	cin>>a[i];
    bubble_sort(a,n);
    cout<<"Enter the element to search"<<endl;
    int e;
    cin>>e;
    binary_search(a,n,e);
    return 0;
}
