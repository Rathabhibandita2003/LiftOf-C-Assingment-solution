#include<stdio.h>
#include<conio.h>
int Even(int a)
{
	if(a%2==0)
    return 1;
    else
    return 0;
}


int main()
{
    int a;
    
    
    printf("Enter any number: ");
    scanf("%d", &a);
    
    
    
    if(Even(a)==1)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}
