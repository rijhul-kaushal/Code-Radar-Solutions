// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && a==c)
    printf("Equilateral");
    else if((a==b && a!=c ) ||(b==c &&a!=b))
    printf("Isosceles");
    else
    printf("Scalene")
    return 0;
}