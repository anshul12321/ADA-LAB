#include<stdio.h>
#include<stdlib.h>

int gcd(int n,int m)
	{
	int rem;
	rem=n%m;
	if(rem==0)
		{
		return m;
		}
	else
		{
		return gcd(m,n%m);		
		}
	}
	
void main()
	{
	int res,m,n;
	printf("Enter two numbers:");
	scanf("%d%d",&n,&m);
	res=gcd(n,m);
	printf("The GCD is %d\n",res);
	}

