// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<2)
    printf("Enter a valid Number");
    else if (a%a==0 || a==2)
    printf("Prime");
    else 
    printf("Not Prime");
    return 0;
}