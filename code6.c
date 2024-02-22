// program to find factorial using recursion of no. greater than 25

#include <stdio.h>
int fact(int);
int main() 
{
    int i,n;
    printf("input a number \n");
    scanf("%d",&n);
    printf("factorial is %d",fact(n));
    return 0;
}
int fact(int n)
{
    int f=1;
    if(n==0||n==1)
    return 1;
    else
    {
        f=n*fact(n-1);
        return f;
    }
}
