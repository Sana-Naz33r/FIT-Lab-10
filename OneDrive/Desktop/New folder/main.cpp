#include <stdio.h>

int main() {
    int a, b, temp;

    // Taking input from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Displaying original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping values
    temp = a;
    a = b;
    b = temp;

    // Displaying swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
