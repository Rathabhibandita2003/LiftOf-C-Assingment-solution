# include <stdio.h>
#include <conio.h>
int GCD(int a,int b);
int main()
{
 int a,b;
 printf ("enter any two number");
 scanf("%d %d",&a,&b);
 printf("GCD of two numbers %d and %d is %d",a,b,GCD(a,b));
 return 0;
}
int GCD(int a ,int b)
{
	int i, hcf;
 for(i=1;i<=a && i<=b;++i)	
 {
 	if(a%i==0 && b%i==0)
 	hcf=i;
 }
 return hcf;
}
