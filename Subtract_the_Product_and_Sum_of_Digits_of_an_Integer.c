#include<stdio.h>
int main()
{
    int n,rem,s=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        p*=rem;
        s+=rem;
        n/=10;
    }
    printf("%d",p-s);
}