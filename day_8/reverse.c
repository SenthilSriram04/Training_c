#include<stdio.h>
int main()
{
    int val=1234,rev=0;
    while(val>0)
    {
        rev=rev*10 + val%10;
        val/=10;
    }
    printf("%d",rev);
    return 0;
}