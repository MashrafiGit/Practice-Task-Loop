#include<stdio.h>
int main()
{
    // we need odd number from 100 to 1 right just take 99 first then just  i-2 upto 1 simple.
    for(int i=99; i>= 1; i-=2)
    {
        printf("%d\n", i);
    }

    return 0;
}