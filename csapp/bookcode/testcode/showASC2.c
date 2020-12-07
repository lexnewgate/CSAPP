#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DEFAULT_CHARCOUNT_PERLINE 12

int main(int argc,char* argv[])
{

    int realCharCount=DEFAULT_CHARCOUNT_PERLINE;

    if (argc<2)
    {
        fprintf(stderr,"Usage: %s filepath. -n charCountPerline\n",argv[0]);
        return -1;
    }
   else if(argc==4) 
    {

        if(strcmp(argv[2],"-n")==0)
        {
            int ret= sscanf(argv[3],"%d",&realCharCount);
            if(ret==EOF)
            {
                fprintf(stderr,"Usage: %s filepath. -n charCountPerline\n",argv[0]);
                return -1;
            }
        }

    }
    else 
    {
        fprintf(stderr,"Usage: %s filepath. -n charCountPerline\n",argv[0]);
        fprintf(stderr,"-n not specified; use default:%d\n",DEFAULT_CHARCOUNT_PERLINE);
    }
 
    
    char* filepath= argv[1];
    FILE* file= fopen(filepath,"r");
    if(file==NULL)
    {
        perror("error");
        return -1;
    }

    int maxchar=realCharCount+1;
    char *line= malloc(maxchar*sizeof(char));

    while (line=fgets(line,maxchar,file))
    {
        char * content=line;
        while (*content)
        {
            char c= *content++;
            if(c==' ')
            {
                printf("%-5s","SP");
            }
            else if(c=='\n')
            {
                printf("%-5s","\\n");
            }
            else
            {
                printf("%-5c",c);
            }
            
        }
        putchar('\n');
        content=line;
        while (*content)
        {
            printf("%-5d",*content++);
        }
        putchar('\n');
        
    }

    fclose(file);

    return 0;
}