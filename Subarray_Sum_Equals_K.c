#include<stdio.h>
int main()
{
    int n,k,c=0,s,i,j;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s+=a[j];
            if(s==k)
            {
                c+=1;
                break;
            }
            else if(s>k)
            {
                break;
            }
        }
    }
    printf("%d",c);
}