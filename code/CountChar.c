#include<stdio.h>
int main()
{
    float count;
    int c;

    while ((c=getchar())!=EOF)
    {
        count++;
    }

    printf("\ntotal char count:%.f\n",count);

    return 0;
}