#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int left, right, isPalindrome = 1;

    // Read string
    scanf("%s", s);

    // Initialize two pointers
    left = 0;
    right = strlen(s) - 1;

    // Compare characters from both ends
    while (left < right)
    {
        if (s[left] != s[right])
        {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    // Print result
    if (isPalindrome == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
