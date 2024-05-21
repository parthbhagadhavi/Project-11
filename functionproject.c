






#include <stdio.h>

float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
int modulus(int num1, int num2);

int main() {
    int choice;
    float num1, num2;
    printf("my name is soya parth A.");
    printf("Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.\n");

    while (1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %.2f and %.2f is %.2f\n\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %.2f and %.2f is %.2f\n\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %.2f and %.2f is %.2f\n\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0) {
                    printf("Division of %.2f and %.2f is %.2f\n\n", num1, num2, divide(num1, num2));
                } else {
                    printf("Error: Division by zero\n\n");
                }
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n\n", (int)num1, (int)num2, modulus((int)num1, (int)num2));
                break;
            default:
                printf("Invalid choice! Please try again.\n\n");
                break;
        }
    }

    return 0;
}


float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}

int modulus(int num1, int num2) {
    return num1 % num2;
    printf("....thanks ...");
}

 