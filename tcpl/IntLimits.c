#include<stdio.h>
#include<limits.h>

//tests show limits of ints
int main()
{
    //unsigned max
    printf("unsigned char max :%u \n",((unsigned char)-1));
    printf("unsigned short max :%u \n",((unsigned short)-1));
    printf("unsigned int max :%u \n",((unsigned int)-1));
    printf("unsigned long max :%lu \n",((unsigned long)-1));

    //signed max
    printf("signed char max:%d\n",((unsigned char)-1)>>1);
    printf("signed short max:%d\n",((unsigned short)-1)>>1);
    printf("signed int max:%d\n",((unsigned int)-1)>>1);
    printf("signed long max:%ld\n",((unsigned long)-1)>>1);

    //sign min
    printf("signed char min:%d\n", ~(((unsigned char)-1)>>1));
    printf("signed short min:%d\n", ~(((unsigned short)-1)>>1));
    printf("signed int min:%d\n", ~(((unsigned int)-1)>>1));
    printf("signed long min:%ld\n", ~(((unsigned long)-1)>>1));

    return 0;
}