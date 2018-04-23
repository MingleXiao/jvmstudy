//第一章 第三小节
//作用 虚拟解释器
#include <stdio.h>
#include <limits.h>
#include <float.h>

int run(int a,int b,int code);
int main()
{
    int a=5;
    int b=3;
    int code=0x01;
    int r=run(a,b,code);
    printf("r=%d\n",r);

    return 0;
}

int run(int a,int b,int code){
    if(code==0x01){
        return a+b;
    }

    return -1;

}
