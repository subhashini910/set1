#include<stdio.h>

int main()
{
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("%c is VOWEL.", c);
    }
    else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
       
        printf("%c is CONSONANT.", c);
    }

    return 0;
}
