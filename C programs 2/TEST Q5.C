#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[100] = "advance";
    int len, i, j;

    len = strlen(text);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if ((i + j >= len - 1) && i >= j)
            {
                if (i % 2 != 0)
                {
                    text[j] = toupper(text[j]);
                } else {
                    text[j] = tolower(text[j]);
                }
                printf("%c", text[j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
