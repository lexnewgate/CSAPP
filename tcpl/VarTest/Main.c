#include<stdio.h>



int main()
{
    extern short a;
    printf("%d %d\n",a,b);
    return 0;
}

static int b=2;