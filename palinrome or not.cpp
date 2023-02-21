#include<stdio.h>
int main()
{
	int n,s=0,i,t;
	printf("\n Enter a number");
	scanf("%d",&n);
	t==n;
	while(n>0)
	{
		i=n%10;
		s=s+(i*i*i);
		n=n/10;
	}
	if (t==s)
	printf("\n Amstrong number");
	else 
	printf("\n Not an Amstrong number");
}
