#include <stdio.h>

int main() {
    char ch, choice;

label:

    printf("Enter an alphabet: ");
    fflush(stdout);
    scanf(" %c", &ch);

    if (ch == 'i' || ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'U' || ch == 'O')
    {
        printf("%c is a vowel.\n", ch);
    }
    else
    {
        printf("%c is a consonant.\n", ch);
    }

    printf("Do you want to check again (y/n)\n");
    fflush(stdin); fflush(stdout);

    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        goto label;
    }
    else
    {
        return 0;
    }
}
