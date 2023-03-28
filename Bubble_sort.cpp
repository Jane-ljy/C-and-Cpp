#include <iostream>
using namespace std;
int main()
{
	int i,j,k;
	int arr[10];
	for(i = 0;i<10;i++)
	cin>>arr[i];
	for(i = 0;i<9;i++)
	{
		for(j = 0;j<9-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				k = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = k;
			}
		}
	}
	for(i = 0;i<10;i++)
	cout<<arr[i]<<endl;
	return 0; 
}
