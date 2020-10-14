#include<stdio.h>

//返回EscapeChar的字符串形式
char * ConvertEscapeChar(char c)
{
    if(c==' ')
    {
        return "SP";
    }
    else if(c=='\n')
    {
        return "\\n";
    }

    return 0;
}


void PrintSeq()
{

}

int main()
{
    FILE *fp=fopen("hello.c","r");
    if(fp==NULL)
    {
        printf("cannot open file");
        return 1;
    }   

    int c;
    int count=0;
    char seq[16];
    // printf("%d\n",count);
    while ((c=getc(fp))!=EOF)
    {
        // putchar(count);
        seq[count]=c;
        count++;
        printf("%4d",c);
        if(count%16==0)
        {
            putchar('\n');
            for (int i = 0; i < count; i++)
            {
                // putchar(seq[i]);
                char* s= ConvertEscapeChar(seq[i]);
                if(!s)
                {
                    printf("%4c",seq[i]);
                }
                else
                {
                    printf("%4s",s);
                }
            }
            putchar('\n');
            count=0;
        }
    }

        putchar('\n');
            for (int i = 0; i < count; i++)
            {
                // putchar(seq[i]);
                char* s= ConvertEscapeChar(seq[i]);
                if(!s)
                {
                    printf("%4c",seq[i]);
                }
                else
                {
                    printf("%4s",s);
                }
            }
            putchar('\n');
            count=0;

    putchar('\n');
    return 0;
}

