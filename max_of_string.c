#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],m='a';
    scanf("%[^
]s",a);
    int i;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=m)
        {
            m=a[i];
        }
    }
    printf("%c",m);
}