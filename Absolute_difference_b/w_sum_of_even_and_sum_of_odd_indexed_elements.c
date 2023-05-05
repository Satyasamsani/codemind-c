#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,i,esum=0,osum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            esum+=a[i];
        }
        else{
            osum+=a[i];
            
        }
        
    }
    int diff;
    diff=esum-osum;
    printf("%d",abs(diff));
}