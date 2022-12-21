#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0;
    scanf("%[^
]s",s);
    for(i=1;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c+=1;
        }
    }
    printf("%d",c+1);
}