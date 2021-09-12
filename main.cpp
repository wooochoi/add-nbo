#include <stdio.h>
#include <stdint.h>
#include "sum.h"


int main(int argc, char** argv)
{
    FILE *a, *b;
    a = fopen(argv[1], "rb");
    b = fopen(argv[2], "rb");
    
    uint32_t num1, num2;

    fread(&num1, sizeof(uint32_t), 1, a);
    fread(&num2, sizeof(uint32_t), 1, b);

    sum(num1, num2);

    fclose(a);
    fclose(b);

}