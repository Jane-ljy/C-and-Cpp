#include <stdio.h>
int main()
{
	int w,n,i,m,t,max,mid,arr[200],p[200],arr2[200];
	scanf("%d %d",&w,&n);
	for(i = 0;i<n;i++)
	scanf("%d",&arr[i]);
	if(w%2 == 1)
	{
		for(i = w/2;i<n-(w/2);i++)
		{
			for(m = 0;m<w;m++)
			p[m] = arr[i+m-w/2];
			for(m = 0;m<w/2+1;m++)
			{
				for(t = 0;t<w-1-m;t++)
				{
					if(p[t] > p[t+1])
					{
					mid = p[t];
					p[t] = p[t+1];
					p[t+1] = mid;
				    }
				}
			}
			arr2[i] = p[w/2];
		}
		for(i = 0;i<w/2;i++)
		printf("%d ",arr[i]);
		for(i = w/2;i<n-w/2;i++)
		printf("%d ",arr2[i]);
		for(i = n-w/2;i<n;i++)
		printf("%d ",arr[i]);
	}
	else
	printf("ERROR\n");
	return 0;
}