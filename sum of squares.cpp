#include <stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=20;i++)
	{
		sum=sum+(i*i);
	}
	printf("%d",sum);
	return 0;
}
