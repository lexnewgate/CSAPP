#include<stdio.h>

//squeeze multiple spaces to one
int main()
{
    char c;
    int inspace=0;
    
    while ((c=getchar())!=EOF)
    {
        if(c==' ')
        {
            if(inspace)
            {
                continue;
            }
            else
            {
                putchar(c);
                inspace=1;
            }
        }
        else
        {
            putchar(c);
            inspace=0;
        }
    }
    
    return 0;
}