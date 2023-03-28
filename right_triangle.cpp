#include <stdio.h>
int main()
{
	int n,i,a,b,c;
	scanf("%d\n",&n);
	char arr1[n]={0},arr2[n]={0},arr3[n]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&arr1[i],&arr2[i],&arr3[i]);
		{
		    if(arr1[i]>arr2[i])
		    {
			    if(arr1[i]<arr3[i])
		    	{
			        a = arr1[i];
			        arr1[i] = arr3[i];
			        arr3[i] = a;
		        }
	    	}
		    if(arr2[i]>arr1[i])
		    {
			    if(arr2[i]<arr3[i])
			    {
			        a = arr1[i];
			        arr1[i] = arr3[i];
			        arr3[i] = a;
	        	}
			    else
		    	{
			        a = arr1[i];
			        arr1[i] = arr2[i];
			        arr2[i] = a;
	    	    }
		    }
	    }
	}
	for(i=0;i<n;i++)
	{	
	    if(arr1[i]>0 && arr2[i]>0 && arr3[i]>0)
	    {
	    	b = arr1[i]*arr1[i];
		c = arr2[i]*arr2[i]+arr3[i]*arr3[i];
		if(b == c)
		printf("Yes\n");
		else
		printf("No\n");
	    }
	    else
	    printf("No\n");
	}
	return 0;
}