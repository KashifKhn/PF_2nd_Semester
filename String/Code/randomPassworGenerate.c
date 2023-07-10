// random password generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char capitalLetters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char smallLetters[27] = "abcdefghijklmnopqrstuvwxyz";
char numbers[11] = "0123456789";
char specialCharacters[27] = "!@#$%^&*()'`~+-*/_{}[]|<>?";

void generatePassword(int length, char password[])
{
    for(int i=0; i<length; i++)
    {
        int random = rand()%4;
        switch(random)
        {
            case 0:
                password[i] = capitalLetters[rand()%26];
                break;
            case 1:
                password[i] = smallLetters[rand()%26];
                break;
            case 2:
                password[i] = numbers[rand()%10];
                break;
            case 3:
                password[i] = specialCharacters[rand()%29];
                break;
        }
    }
}

int main()
{
    srand(time(0));
    int passwrodLength;
    printf("Enter the length of the password: ");
    scanf("%d", &passwrodLength);
    char password[passwrodLength];
    generatePassword(passwrodLength, password);
    printf("The password is: %s\n", password);
}