#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int a,i,x,b,c;
    char arr1[256],arr2[256],arr3[256];
	fgets(arr1,256,stdin);
	b = strlen(arr1);
//	printf("%d",b);
    if(arr1[i] != '\n')
    {
	    for(i = 0,a = 0;i < b;i++)
	    {
//	    	c = isalpha(arr1[i]);
//	        if(c != 0)
            if('a'<=arr1[i] && arr1[i]<='z' || 'A'<=arr1[i]&& arr1[i]<='Z')
	        {
	    	    arr2[a] = arr1[i];
	    	    a++;
		    }
		    else
	        {
	    	    for(x = a-1;x >= 0;x--)
	    	    printf("%c",arr2[x]);
//	    	    if(arr1[i]==' ')
//				printf(" ");
//				else
				printf("%c",arr1[i]);
//				for(x=0;x<=a;x++)
//				arr2[x]=0;
				a=0;
				char arr2[i] = {0};
	        }
        }
    }
    return 0;
}