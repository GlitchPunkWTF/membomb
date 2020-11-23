#include <stdio.h>
#include <stdlib.h>

#define VAL 1024 * 1024
#define OUT

int main()
{
    while (1)
    {
        int *mem;
        mem = (int *)malloc(VAL);
#ifdef OUT
        printf("%X\n", mem);
#endif
    }
}