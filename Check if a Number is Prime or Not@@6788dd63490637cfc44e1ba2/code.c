// Your code here...
#include <stdio.h>
int main(){
    int a, prime=0;
    scanf("%d",&a);
    if(a==2){
    printf("Prime");
    return 0;
    }
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        prime=1;
    }
    if(prime)
    printf("Prime");
    else
    printf("Not Prime");
}