#include<stdio.h>
int main()
{
    int n,i,k=0,min,j,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=min;i>=1;i--)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
    }
}