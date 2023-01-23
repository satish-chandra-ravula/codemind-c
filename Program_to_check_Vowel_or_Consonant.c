#include<stdio.h>
int main()
{
    char ch;
    int lowercase_vowel,uppercase_vowel;
    scanf("%c",&ch);
    lowercase_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    uppercase_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(lowercase_vowel||uppercase_vowel)
    printf("Vowel");
    else
    printf("Consonant");
}
