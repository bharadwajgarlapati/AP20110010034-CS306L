
/*
Implement a language recogniser which accepts set of all strings over the alphabet
∑={a,b} containing an even number of a’s and an even number of b’s.
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
                printf("\nInvalid token\n");
                exit(0);
            }
            break;
        case 1:
            if (str[i] == 'a')
            {
                state = 0;
            }
            else if (str[i] == 'b')
            {
                state = 2;
            }
            else
            {
                printf("\nInvalid token\n");
                exit(0);
            }
            break;
        case 2:
            if (str[i] == 'a')
            {
                state = 3;
            }
            else if (str[i] == 'b')
            {
                state = 1;
            }
            else
            {
                printf("\nInvalid token\n");
                exit(0);
            }
            break;
        case 3:
            if (str[i] == 'a')
            {
                state = 2;
            }
            else if (str[i] == 'b')
            {
                state = 0;
            }
            else
            {
                printf("Invalid token\n");
                exit(0);
            }
            break;
        default:
            printf("Invalid state\n");
            break;
        }
    }

    if (state == 0)
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
