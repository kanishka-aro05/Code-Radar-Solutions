#include <stdio.h>

int main() {
    char Name[50], Hobby[50];  
    int Age;

   scanf("%s", Name);
    printf("Name: %c",Name);
      

    scanf("%d", &Age);
    printf("Age: %d",Age);
    
    scanf(" %s", Hobby);  
    printf("Hobby: %c",Hobby);

   

    return 0;
}
