#include <stdio.h>

int main() {
    char name[30]; // temporary space for string input
    int age;

    printf("Enter your name (single word): ");
    scanf("%s", name);  // %s works without needing to explicitly use array indexing here

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s, I am %d years old.\n", name, age);

    return 0;
}
