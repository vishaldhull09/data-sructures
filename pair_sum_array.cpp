#include <iostream>
using namespace std;

void FindPairs(int*,int,int);

int main()
{
	int n,sum;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter sum."<<endl;
	cin>>sum;
	FindPairs(arr,n,sum);
	return 0; 
}
	
void FindPairs(int* arr,int size,int sum)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{ 
			if(arr[i]+arr[j] == sum)
			{
				cout<<"Pair found at index "<<i<<" and "<<j<<endl;
			}
		}
	}
}
