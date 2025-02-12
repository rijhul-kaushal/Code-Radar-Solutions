// Your code here...
#include <stdio.h>
int main(){
    int a, prime=0;
    scanf("%d",&a);
    for(int i=2;i*i<a;i++)
    {
        if((a%i==0) ||(a==2))
        prime=1;
        break;
    }
    if(prime)
    printf("Prime");
    else
    printf("Not Prime");
}