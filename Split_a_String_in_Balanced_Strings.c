#include<stdio.h>
int main()
{
    int c=0,x=0;
    char str[100];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='R')
        c++;
        else if(str[i]=='L')
        c--;
        if(c==0)
        {
            x++;
        }
    }
    printf("%d",x);
}