#include <stdio.h>
int main()
{
	int a[100][100],re[100][100] = {0},a2[100][100];
	int n,k,i,j,m,t,p;
	scanf("%d %d",&n,&k);
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		a2[i][j] = a[i][j];
		}
	}
	for(m = 0;m<k-1;m++)
	{
		for(i = 0;i<n;i++)
		{
			for(j = 0;j<n;j++)
			{
				for(p = 0;p<n;p++)
				{
					re[i][j] = re[i][j]+a2[i][p]*a[p][j];
				}
			}
		}
		if(m != k-2)
		{
		for(i = 0;i<n;i++)
		{
			for(j = 0;j<n;j++)
			{
				a2[i][j] = re[i][j];
				re[i][j] = 0;
			}
		}
		}
	}
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n;j++)
		printf("%d ",re[i][j]);
		printf("\n");
	}
	return 0;
}