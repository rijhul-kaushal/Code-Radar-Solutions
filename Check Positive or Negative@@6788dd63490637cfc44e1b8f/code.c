// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d %d",&a,&b);
    if(a%2==0 && a!==0)
    printf("Positive");
    else if (a%2!==0 && a!=0)
    printf("Negative");
    else
    printf("Zero");
    return 0;
}