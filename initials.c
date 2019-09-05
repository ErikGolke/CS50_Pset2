#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// this program takes a name, and outputs the initials in capitalized letters

int main(void)
{
    string name = GetString();

// checks to see if letters are capitalized, and if not, capitalizes them

    for (int i= 0; i < strlen(name); i++)
    {
        if ((name[i] >= 'a') && (name[i] <= 'z'))
        {
            name[i] = toupper(name[i]);
        }
    }
 
 // prints the first letter of the first word
    
    printf("%c", name[0]);
    
 // checks to see if there are any spaces, and if so, prints the char after
 
    for (int i = 0; i < strlen(name); i++)  
    {
        if (name[i] == ' ')
        {
            printf("%c", (name[i + 1]));
        }
    }
 
    printf("\n");

    return 0;
 }