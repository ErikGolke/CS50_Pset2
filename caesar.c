#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 10/25/2016, program written by Erik Golke.
// this program encrypts input with a simple caesar cypher.

int main(int argc, string argv[])
{
   // checks to make sure 1 command line argument
   // has been inputted, otherwise terminates.
    if (argc != 2)
    {
        printf("You must enter one integer to be used as the key!\n");
        return 1;
    }
    // gets the string to be encrypted
    string input = GetString();

   // loops through string, checks if it is alpha,
   // and if upper or lower performs formula
   
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        int k = atoi(argv[1]);
       
        if (isalpha(input[i]))
        {
            if (isupper(input[i]))
            {
                int upper = ((input[i] - 65) + k) % (26);
                printf("%c", (upper + 65));
            }
            else if (islower(input[i]))
            {
                int lower = ((input[i] - 97) + k) % (26);
                printf("%c", (lower + 97));  
            }
            else
            {
                return 1;
            }
         }  
        else  
    // This line prints a space, if encountered
        {
            printf("%c", input[i]);
        }
}
    printf("\n");
 
    return 0;   
}