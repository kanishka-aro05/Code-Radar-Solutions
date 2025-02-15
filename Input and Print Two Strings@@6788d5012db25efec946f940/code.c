#include <stdio.h>

int main() {
    char word1[50], word2[50];  // Declare character arrays (strings)

    scanf("%s %s", word1, word2);  // Read two words (separated by space)

    printf("You entered: %s and %s\n", word1, word2);  // Print the words

    return 0;
}
