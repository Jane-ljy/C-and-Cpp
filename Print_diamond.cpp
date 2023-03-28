#include <stdio.h>
int main()
{
	int n,i,a,b,arr1[255];
	char arr[1000];
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		if(arr1[i]%2 == 1)
		{
			printf("print\n");
			for(a = 0;a<arr1[i];a++)//
			{
				if(a == 0)
				{
				    for(b = 0;b<arr1[i];b++)
					{
				        if(b == (arr1[i]-1)/2)
				        arr[b] = '*';
				        else
				        arr[b] = ' ';
				    }
				    for(b = 0;b<arr1[i];b++)
				    printf("%c",arr[b]);
				    printf("\n");
				}
				else if(a <= (arr1[i]-1)/2)
				{
					arr[(arr1[i]-1)/2-a] = '*';
					arr[(arr1[i]-1)/2+a] = '*';
					for(b = 0;b<arr1[i];b++)
					printf("%c",arr[b]);
					printf("\n");
				}
				else
				{
					arr[a-(arr1[i]-1)/2-1] = ' ';
					arr[(3*arr1[i]+1)/2-a-1] = ' ';
					for(b = 0;b<arr1[i];b++)
					printf("%c",arr[b]);
					printf("\n");
				}
			}
		}
		else
		printf("error\n");
	}
}
