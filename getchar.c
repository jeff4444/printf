#include <unistd.h>
char _getchar(void)
{
    char c[1];
    read(0, c, 1);
    char s = c[0];
    return (s);
}