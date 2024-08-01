#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    char arr[n];
    char alpha[26] = {0};

    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]); 
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            alpha[arr[i] - 'a']++; 
        }
    }

    char find;
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &find); 

    if (find >= 'a' && find <= 'z')
    {
        printf("The frequency of the character '%c' is: %d\n", find, alpha[find - 'a']);
    }
    else
    {
        printf("The character '%c' is not a lowercase letter.\n", find);
    }

    return 0;
}
