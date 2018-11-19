
#include <stdio.h>
#include "c-sum.h"

#define NUM 200

int main(int argc, char **argv)
{
    int data[NUM], num, i, sum;

    num = NUM;
    for (i=0; i < num; i++) {
        data[i] = i - 100 + 1;  
    }
    sum_abs_(data, &num, &sum);
    printf("sum=%d\n", sum_abs_);
    return 0;
}
