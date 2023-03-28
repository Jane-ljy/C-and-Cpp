#include <stdio.h>
int main()
{
	int N,n,i,k,a,b,c;
	n < 15;
	int arr1[256],arr2[256];
	scanf("%d",&N);
    for(i = 0;i < N;i++)
	{
	    scanf("%d",&n);
		for(k = 1;k < n+1;k++)
		{
		    if(1 == k)
		    printf("1\n");
		    else if(2 == k)
		    {
		    	arr1[0] = 1,arr1[1] = 1;
		    	for(a = 0;a < k;a++)
		    	printf("%d ",arr1[a]);
		    	printf("\n");
			}
			else
			{
			    for(b = 0;b < k;b++)
			    {
			    	if(0 == b || k-1 == b)
					{
			    	    arr2[b] = 1;
			    	    printf("%d ",arr2[b]);
			    	}
			    	else
			    	{
			    	    arr2[b] = arr1[b-1]+arr1[b];
			    	    printf("%d ",arr2[b]);
			    	}
		    	}
		    	printf("\n");
		    	for(c = 0;c < k;c++)
		    	arr1[c] = arr2[c];
		    }
		}
	}
    return 0;
}