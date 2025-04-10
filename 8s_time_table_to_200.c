#include <stdio.h>
int main()
{
    // we need 8s time table up to 200 right just take 8 first then just  i+8 upto 200 simple
    for (int i = 8; i <= 200; i += 8)
    {
        printf("%d\n", i);
    }

    return 0;
}