#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b-a>0)
    printf("Profit");
    else if (a-b>0)
    printf("Loss");
    else 
    printf("No Profit No Loss");

    return 0;
}