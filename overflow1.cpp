#include<stdio.h>

size_t getIndex(int index)
{
    return index;
}

int main(){
    int a;
    unsigned int b;
    b=getIndex(-1);
    printf("%u\n",b);
    return 0;
}