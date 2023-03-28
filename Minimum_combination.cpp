#include <stdio.h>
int main()
{
	int arr[10],i,arr2[10],a,t,x,sum = 0;
	for(i = 0;i<10;i++)
	scanf("%d",&arr[i]);
	for(i = 0;i<10;i++)
	sum = sum + arr[i];
	if(sum <= 50)
	{
	if(arr[0] == 0)
	{
		for(i = 1,t = 0;i<10;i++)
		{
			for(a = 0;a<arr[i];a++)
			{
			    printf("%d",i);
			    t++;
			}
		}
	}
	else
	{
		for(i = 1;i<10;i++)
		{
			if(arr[i] != 0)
			{
			    printf("%d",i);
			    arr[i]--;
			    break;
			}
		}
		for(x = 0,t = 0;x<10;x++)
		{
			for(a = 0;a<arr[x];a++)
			{
			    printf("%d",x);
			    t++;
			}
		}
	}
    }
    return 0;
}