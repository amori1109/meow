#include<stdio.h>
int main()
{
  int i,n,factorial;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  factorial=factorial*i;
  {
  	printf("%d",factorial);
  }
  return 0;	
}
