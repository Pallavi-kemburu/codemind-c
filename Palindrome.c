#include<stdio.h>
int main()
{
    int n,r,rev=0,original;
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(original==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}