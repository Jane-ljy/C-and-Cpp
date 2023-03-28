#include <stdio.h>
int main()
{
	int a,b,c,d,i,T,e;
	scanf("%d\n",&T);
	int a1[T],a2[T];
	for(i = 0;i<T;i++)
	scanf("%d%d",&a1[i],&a2[i]);
	for(i = 0;i<T;i++)
	{
		if(100<=a1[i] && a1[i]<=a2[i] && a2[i]<=999)
		{
			for(a = a1[i],e = 0;a<a2[i]+1;a++)
			{
				b = a/100;
				c = (a-100*b)/10;
				d = a-100*b-10*c;
				if(a == b*b*b+c*c*c+d*d*d)
			    {
				    printf("%d ",a);
				    e++;
			    }
		    }
		    if(e == 0) printf("-1\n");
		    else printf("\n");
		    
		}
	}
	return 0;
}