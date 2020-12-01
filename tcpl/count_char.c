#include <stdio.h>

int main()
{
    int c,nwhite,nother;

    int ndigit[10];

    //init 
    nwhite=nother=0;
    for (int i = 0; i < 10; i++)
    {
        ndigit[i]=0;
    }

    while ((c=getchar())!=EOF)
    {
        if(c>='0'&&c<='9')
        {
            ndigit[c-'0']++;
        }
        else if(c=='\n'||c==' '||c=='\t')
        {
            nwhite++;
        }
        else
        {
           nother++; 
        }
    }

    printf("number statics:\n");
    for (int i = 0; i < 10; i++)
    {            
        printf("%d count:%d\n",i,ndigit[i]);
    }

    printf("white count:%d\n",nwhite);

    printf("other count:%d\n",nother);
        
}