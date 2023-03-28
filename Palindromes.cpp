#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int n,i,j,x,a,c;
	int arr[256],num[256];
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		for(x = 0,c = arr[i];c != 0;x++)
		{
			c = c/10;
		}
		for(j = x-1;j>=0;j--)
		{
			num[j] = arr[i]/pow(10,j);
			arr[i] -= num[j]*pow(10,j);
//			printf("%d ",num[j]);
		}
		for(a = 0;a<(x-1)/2+1;)
		{
			if(num[a] == num[x-1-a])
			a++;
			else
			break;
		}
//		printf("%d",a);
		if((x-1)/2+1 == a)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}