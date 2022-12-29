#include<stdio.h>
int main()
{
    int i,b,w,c;
    scanf("%d%d%d%d",&i,&b,&w,&c);
    int area=((i+2*w)*(b+2*w))-(i*b);
    printf("%d",area*c);
}