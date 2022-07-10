#include<stdio.h>
int main()
{
    int n,s,i,x,y,z,a,b,k;
    scanf("%d",&s);
    while(s)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        x=n/a;
        y=n/b;
        z=n/(a*b);
        if(x+y-z>=k)
        printf("Win
");
        else
        printf("Lose
");
        s-=1;
    }
}