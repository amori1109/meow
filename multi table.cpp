#include <stdio.h>
int main()
{
	int n,i;
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
      printf("%d*%d=%d",i,n,n*i);
	}
	return 0;
}
