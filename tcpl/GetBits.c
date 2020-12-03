#include<stdio.h>

unsigned getbits(unsigned x,int p,int n)
{
   return (x>>(p+1-n))&( ~(~0<<n)); 
}

int main()
{
    printf("%u\n",getbits(7<<2,4,3));
    printf("%u\n",getbits((5<<2)+3,4,3));

    return 0;
}