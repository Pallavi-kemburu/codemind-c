#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,p,b;
    scanf("%d",&p);
    scanf("%d",&b);
    for(i=p;i<=b;i++)
    {
        printf("%c",a[i]);
    }
    
}