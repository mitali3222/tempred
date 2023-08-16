#include<stdio.h>

main()
{
	int n,temp,a,b=0;
	printf("Enter Value =");
	scanf("%d",&n);
	temp =n;
	while (n!=0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10;
		
	}   printf("Revers Number = %d",b);
}
