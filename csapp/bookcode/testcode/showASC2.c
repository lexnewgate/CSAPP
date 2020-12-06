#include<stdio.h>
int main(int argc,char* argv[])
{
    if (argc!=2)
    {
        fprintf(stderr,"Usage: %s filepath.\n",argv[0]);
        return -1;
    }

    char* filepath= argv[1];
    FILE* file= fopen(filepath,"r");
    if(file==NULL)
    {
        perror("error");
        return -1;
    }
    
    int c;
    while ( (c=getc(file))!=EOF)
    {
        putchar(c);
    }

    fclose(file);

    return 0;
}