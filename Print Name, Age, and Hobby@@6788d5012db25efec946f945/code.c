#include <stdio.h>

int main() {
    char Name[50], Hobby[50];  // Use arrays for string input
    int Age;

    printf("Name: ");
    scanf("%s", Name);  // Reads a single word (use gets() or fgets() for full names)

    printf("Age: ");
    scanf("%d", &Age);

    printf("Hobby: ");
    scanf(" %s", Hobby);  // Reads a full sentence including spaces

    printf("Name: %s\n", Name);
    printf("Age: %d\n", Age);
    printf("Hobby: %s\n", Hobby);

    return 0;
}
