#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include "sum.h"

void sum(uint32_t num1, uint32_t num2)
{
    
    printf("%d(%#x) + %d(%#x) = %d(%#x)\n", htonl(num1), htonl(num1), htonl(num2), htonl(num2), htonl(num1)+htonl(num2), htonl(num1)+htonl(num2));

}