#include<stdio.h>
int main()
{
    int n,rem=0,s=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        s+=rem;
        p*=rem;
        n/=10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
