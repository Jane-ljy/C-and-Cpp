#include <stdio.h>
int Hanoi(int n)
{
	if(n == 1)
	return 1;
	return 2*Hanoi(n-1)+1;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d",Hanoi(n));
	return 0;
}