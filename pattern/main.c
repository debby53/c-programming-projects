#include <stdio.h>

int main() {

    for (int i = 5; i > 0; i--) {

        for (int j = 0; j < 5 - i; j++) {
            printf("  ");
        }

        for (int j = 0; j < (2*i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

