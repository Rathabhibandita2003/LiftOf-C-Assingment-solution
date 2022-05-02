# include<stdio.h>
# include<conio.h>
int prime(int a);
int main ()
{
	int a, sum;
	printf("enter a number");
	scanf("%d",&a);
	sum=prime(a);
	if (sum==1)
	printf("it is a prime number");
	else
	printf("it is not a prime number");
	return 0;
}
int prime(int a)
{
	int i,sum=0;
	for (i=2;i<a;i++)
	{
		if(a%i==0)
		sum=sum+1;
	}
	if(sum>1)
	return 0;
	else
	return 1;
}
