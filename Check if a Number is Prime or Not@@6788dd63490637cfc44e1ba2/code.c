#include<stdio.h>
int main(){
    int a,int prime=0;
    scanf("%d",&a);
    for (i=2;i<=a/2;i++){
        if(a%i==0)
        prime+=1;
    }
    if(prime=0)
    printf("Prime");
    else
    printf("Not prime");
    
    return 0;
}
