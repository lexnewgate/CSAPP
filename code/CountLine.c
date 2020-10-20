#include <stdio.h>
int main()
{
    float count;
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            count++;
        }
    }

    printf("\ntotal line count:%.f\n", count);

    return 0;
}