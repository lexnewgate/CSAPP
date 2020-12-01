#include<stdio.h>
int main()
{
    char c;
    long spaceNumber=0;
    long tabNumber=0;
    long lineNumber=0;
    while ((c=getchar())!=EOF)
    {            
        if(c==' ')
        {
            spaceNumber++;
        }
        else if(c=='\t')
        {
            tabNumber++;
        }
        else if(c=='\n')
        {
            lineNumber++;
        }
    }

    printf("space count:%ld; tab count: %ld; line break count:%ld\n",
        spaceNumber,tabNumber,lineNumber);
    
    return 0;   
}