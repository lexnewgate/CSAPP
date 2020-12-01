#include<stdio.h>

int main()
{
    char c;
    int inChar=0;
    
    while ((c=getchar())!=EOF)
    {
        if(c!=' '&&c!='\n'&&c!='\t')
        {
            inChar=1;
            putchar(c);
        }
        else
        {
            if(inChar==1)
            {
                putchar('\n');
                inChar=0;
            }
        }
    }
    
    return 0;
}