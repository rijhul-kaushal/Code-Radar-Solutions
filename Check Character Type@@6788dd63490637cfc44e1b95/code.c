// Your code here...
#include<stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if ((a=='a') ||(a=='e') ||(a=='i')|| (a=='o')|| (a=='u')||(a=='A') ||(a=='E') ||(a=='I')|| (a=='O')|| (a=='U'))
    printf("Vowel");
    else if(isalpha(a))
    printf("Consonant");
    else if(isdigit(a))
    printf("Digit");
    else
    printf("Special Character");
   
    return 0;
}