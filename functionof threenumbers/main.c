#include <stdio.h>


int addThreeNumbers(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {
    int a, b, c, sum;


    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);


    sum = addThreeNumbers(a, b, c);


    printf("The sum of %d, %d, and %d is: %d\n", a, b, c, sum);

    return 0;
}
