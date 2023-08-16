#include<stdio.h>

main()
{
	int n,count;
	printf("Enter Value =");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	    printf("count number = %d",count);
	    n=n/10;
}
