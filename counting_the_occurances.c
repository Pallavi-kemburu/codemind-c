#include<stdio.h>
int main()
{
    char s[1000],k,i,c=0;
    scanf("%[^
]s",s);
    scanf(" %c",&k);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==k)
        {
            c+=1;
        }
    }
    if(c>0)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}