#include <stdio.h>

int isPrime(int num);

int main() {
    int range;


    printf("Enter a number: ");
    scanf("%d", &range);

    printf("Prime numbers between 1 and %d are:\n", range);


    for (int i = 2; i <= range; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}


int isPrime(int num) {

    if (num <= 1) {
        return 0;
    }


    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;

}




