#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int a=pow(x,y);
    int d=a%z;
    printf("%d",d);
}