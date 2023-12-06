#include <unistd.h>

void print_bits(unsigned char octet)
{
    for (int i = 7; i >= 0; i--)
    {
        char c = ((octet & (1 << i)) ? '1' : '0');
        write(1, &c, 1);
    }
}
