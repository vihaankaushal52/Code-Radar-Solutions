#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2;

    // Read two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Check if num1 is less than num2 and print "True" or "False"
    if (num1 < num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}