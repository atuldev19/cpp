#include<iostream>
using namespace std;
int main()
{
	int n,i,m,count=0;
	cout<<"Enter the size of an array : ";
	cin>>m;
	int arr[m];
	cout<<"Enter the elements of array : ";
	for(i=0; i<m; i++)
	{
		cin>>arr[i];	
	}	
	cout<<"Enter the element to be check : ";
	cin>>n;
	for(i=0; i<m; i++)
	{ 
		if(arr[i]==n)
		{
			count=count+1;
		}
	}
	cout<<"Number of occurrence of "<<n<<" is : "<<count;
	return 0;
}
