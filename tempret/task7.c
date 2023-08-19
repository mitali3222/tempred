#include<stdio.h>

main()
{
	int n,a=0,b=1,c;
	printf("Enter Value ");
	scanf("%d",&n);
	while(a<n)
	{
         printf("%d",a);
         c=a+b;
         a=b;
         b=c;
	}
}
