#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],temp;
    scanf("%[^
]s",a);
    scanf(" %[^
]s",b);
    strcat(a,b);
    for(int i=0;a[i]!=NULL;i++)
    {
        for(int j=0;a[j]!=NULL;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s",a);
}