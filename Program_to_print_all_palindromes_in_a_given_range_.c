#include<stdio.h>
int rev(int n)
{
    int r,rev=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    return rev;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        if(i==rev(i))
            printf("%d ",i);
    }
}