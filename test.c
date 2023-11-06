#include <stdio.h>
#include "libft.h"
#include <string.h>

int main(void)
{
    char dst[] = "0123456789";
    char *src = "abcdefgh";
    size_t n = 25;

    // char *res = ft_memcpy(dst, src, n);
    char *res2 = memcpy(dst, src, n);

    // printf("Mine: %s\n", res);
    printf("STD: %s\n", res2);
}