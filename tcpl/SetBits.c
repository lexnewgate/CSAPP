#include<stdio.h>

//把x的从p开始的n位设置成y的n位,其余位不变.
//从右边开始计算,首位为0.
//返回值为x的新值
unsigned SetBits(unsigned x,unsigned p,unsigned n,unsigned y)
{
    //得到n位 00001..1,其中1的数量为n.为了得到y的最低n位.
    unsigned ybitMask= ~((~0)<<n);
    //得到n位 111100111,其中0的数量为n,为了把x从p开始的n位置0.
    unsigned xbitMask= ~(ybitMask<<p);
    //得到y的n位值
    unsigned nyval= y&ybitMask;
    unsigned newx= (nyval<<p)| (x&xbitMask);
    return newx;
}


int main()
{
    unsigned x=10;
    unsigned p=1;
    unsigned n=2;
    unsigned y=14;

    unsigned newx= SetBits(x,p,n,y);
    printf("new x:%u\n",newx);

    return 0;
}