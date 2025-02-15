#include <stdio.h>

int main() {
    char Name[50], Hobby[50];  
    int Age;

   scanf("%s", Name);
    printf("Name: ");
      

    scanf("%d", &Age);
    printf("Age: ");
    
    scanf(" %s", Hobby);  
    printf("Hobby: ");

    printf("Name: %s\n", Name);
    printf("Age: %d\n", Age);
    printf("Hobby: %s\n", Hobby);

    return 0;
}
