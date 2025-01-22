#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    while (1) {
        printf("\nSIMPLE CALCULATOR\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        } else {
            printf("Invalid choice! Please select a valid option.\n");
            continue;
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;


            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }
    }

    return 0;
}



