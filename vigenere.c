#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Erik Golke, 10/26/2016, CS50 Vigenere cipher
// This program runs a line of text, given at the command prompt
// through a Vigenere cipher.

int main(int argc, string argv[])
{
    // checks to see if 2 arguments given at cmd
    if (argc != 2)
    {
        printf("You must input a word, homediggity!\n");
        return 1;
    }
    
    // checks to see if all chars in argument are alphabetical
    for (int j = 0; j < strlen(argv[1]); j++)
    {
        if (!isalpha(argv[1][j]))
        {
            printf("Command line argument must only be letters!\n");
            return 1;
        }
    }
    // gets input to be encrypted from user
    string input = GetString();
    
    int length = strlen(argv[1]);
    int keynumber[length];
    
    // stores the values of the command line argument's chars
    // in array keynumber[] as numbers 0-25
    for (int i = 0; i < length; i++)
    {
        keynumber[i] = toupper(argv[1][i]) - 65;
    }
    
    // loops through input, replacing chars only if they are alphabetical,
    // and shifts them by the value of the letter in the key.
    for (int i = 0, k = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            if (isupper(input[i]))
            {
                int upper = ((input[i] - 65) + keynumber[k % length]) % (26);
                k++;
                printf("%c", (upper + 65));
            }
            else if (islower(input[i]))
            {
                int lower = ((input[i] - 97) + keynumber[k % length]) % (26);
                k++;
                printf("%c", (lower + 97));  
            }
            }    
            else  
            {
            printf("%c", input[i]);
            }
    } 
    printf("\n");
    return 0;   
}
