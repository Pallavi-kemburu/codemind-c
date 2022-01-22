#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=sqrt(a);
    if(a==b*b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}