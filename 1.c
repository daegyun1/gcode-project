#include <stdio.h>

int add(int x, int y);

int main(void)
{
    int a = 1, b = 3;
    printf("a+b=%d입니다\n", add(a, b));
    return 0;
}

int add(int x, int y)
{
    int res;
    res = x + y;
    return res;
}
