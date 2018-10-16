#include<iostream>
using namespace std;
int a[20];
int n,val,i,j,pos,temp;
//this is for insertion 

void insert()
{
    cout<<("\nEnter the position for the new element:\t");
    cin>>pos;
    cout<<("\nEnter the element to be inserted :\t");
    cin>>val;
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    n=n+1;
}

void del()
{
	cout<<("\nEnter the position of the element to be deleted:\t");
        cin>>pos;
        val=a[pos];
        for(i=pos;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        cout<<("\nThe deleted element is =%d",val);
}

void loc()
{
	int e,c=0;
	cin>>e;
	for(int i=0;i<n;i++)
	{
		if(a[i]==e)
		{
			c++;
			cout<<i<<endl;
			break;
		}
	}
	if(c==0)
		cout<<"Element not present"<<endl;
}

void display()
{
        int i;
        cout<<("\nThe array elements are:\n");
        for(i=0;i<n;i++)
	{
             cout<<a[i]<<" ";
        }
}

int main()
{
        cout<<("\nEnter the size of the array elements:\t");
        cin>>n;
        cout<<("\nEnter the elements for the array:\n");
        for(i=0;i<n;i++)
        {
               cin>>a[i];
        }
	cout<<"Enter 'a' for insertion, 'b' for deletion, 'c' to locate, 'd' to display & 'x' to exit the menu"<<endl;
        char ch;
	cin>>ch;
       	while(ch!='x')
	{
            switch(ch)
            {
                case 'a':
                insert();
                break;
                case 'b':
                del();
                break;
                case 'c':
                loc();
                break;
		case 'd':
		display();
		break;
            }
	    cout<<endl<<"Enter your choice"<<endl;
	    cin>>ch;
        }
return 0;
}


