#include <stdio.h>

int main() {
    int a, prime = 1;  
    scanf("%d", &a);

   
    if (a < 2) {
        printf("Not Prime\n");
        return 0;
    }

 
    if (a == 2) {
        printf("Prime\n");
        return 0;
    }

  
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            prime = 0;  
            break;      
        }
    }
    if (prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
