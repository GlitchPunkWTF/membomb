#include <unistd.h>
#include <stdlib.h>
#define BOMB

int main()
{
    long mempagesize = sysconf(_SC_PAGESIZE);
#ifdef BOMB
    while (1)
    {
        char *mem;
        mem = (char *)calloc(sizeof(char), mempagesize);
    }
#endif //BOMB
}