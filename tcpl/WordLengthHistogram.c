#include <stdio.h>

int main()
{
    char c;
    int wordLength[10]; //pos 0 store length>=10
    int inChar = 0;
    int length = 0;

    for (int i = 0; i < 10; i++)
    {
        wordLength[i]=0;
    }
    


    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            if (inChar)
            {
                //word first out
                if (length >= 10)
                {
                    wordLength[0]++;
                }
                else
                {
                    wordLength[length]++;
                }

                inChar = 0;
                length = 0;
            }
        }
        else
        {
            inChar = 1;
            length++;
        }
    }

    if (inChar)
    {
        //word first out
        if (length >= 10)
        {
            wordLength[0]++;
        }
        else
        {
            wordLength[length]++;
        }
    }

    //print data horizontal

    printf("word length x:");
    for (int i = 0; i < wordLength[0]; i++)
    {
        putchar('*');
    }

    putchar('\n');

    for (int i = 1; i < 10; i++)
    {
        printf("word length %d:", i);
        for (int j = 0; j < wordLength[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}