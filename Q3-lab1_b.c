#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    char arr[n];
    int alpha[52] = {0}; 
    
    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            alpha[arr[i] - 'a']++; 
        } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            alpha[arr[i] - 'A' + 26]++; 
        }
    }

    char find;
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &find); 

    if (find >= 'a' && find <= 'z') {
        printf("The frequency of the character '%c' is: %d\n", find, alpha[find - 'a']);
    } else if (find >= 'A' && find <= 'Z') {
        printf("The frequency of the character '%c' is: %d\n", find, alpha[find - 'A' + 26]);
    } else {
        printf("The character '%c' is not a valid letter.\n", find);
    }

    return 0;
}
