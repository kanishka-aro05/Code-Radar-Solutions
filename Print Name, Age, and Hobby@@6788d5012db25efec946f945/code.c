#include <stdio.h>

int main() {
    char Name[50];  

   scanf("%s", Name);
    printf("Name: %",&Name);
      
  int Age;
    scanf("%d", &Age);
    printf("Age: %d",&Age);
     char Hobby;
    scanf("%s", Hobby);  
    printf("Hobby: %c",&Hobby);
    return 0;
}
