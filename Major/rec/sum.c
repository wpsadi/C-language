#include <stdio.h>
#include <conio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    clrscr();
    printf("%d:", sum(100));
    return 0;
}