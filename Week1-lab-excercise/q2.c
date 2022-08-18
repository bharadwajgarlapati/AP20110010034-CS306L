
/*
Implementation of Language recognizer for set of all strings ending with two symbols of
same type.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    char str[1000];
    int state = 0;

    printf("\nInput the string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        switch (state)
        {
        case 0:
            if (str[i] == 'a')
            {
                state = 1;
            }
            else if (str[i] == 'b')
            {
                state = 3;
            }
            else
            {
                printf("Invalid token\n");
                exit(0);
            }
            break;
        case 1:
            if (str[i] == 'a')
            {
                state = 2;
            }
            else if (str[i] == 'b')
            {
                state = 3;
            }
            else
            {
                printf("Invalid token\n");
                exit(0);
            }
            break;
        case 2:
            if (str[i] == 'a')
            {
                state = 2;
            }
            else if (str[i] == 'b')
            {
                state = 3;
            }
            else
            {
                printf("Invalid token\n");
                exit(0);
            }
            break;
        case 3:
            if (str[i] == 'a')
            {
                state = 1;
            }
            else if (str[i] == 'b')
            {
                state = 4;
            }
            else
            {
                printf("Invalid token\n");
                exit(0);
            }
            break;
        case 4:
            if (str[i] == 'a')
            {
                state = 1;
            }
            else if (str[i] == 'b')
            {
                state = 4;
            }
            else
            {
                printf("Invalid token\n");
                exit(0);
            }
            break;
        default:
            printf("Invalid state\n");
            exit(0);
            break;
        }
    }

    if (state == 2 || state == 4)
    {
        printf("\nString accepted\n");
    }
    else
    {
        printf("\nString not accepted\n");
    }

    printf("\n");

    return 0;
}
