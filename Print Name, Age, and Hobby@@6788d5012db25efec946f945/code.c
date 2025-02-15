#include <stdio.h>

int main() {
    char Name[50], Hobby[50];  
    int Age;

   scanf("%s", Name);
    printf("Name: %s",Name);
      

    scanf("%d", &Age);
    printf("Age: %d",Age);
    
    scanf(" %s", Hobby);  
    printf("Hobby: %s",Hobby);

   

    return 0;
}
