// binary to decimal

#include <stdio.h>
#include <math.h>

void convert(int num);

int main()
{
    int x = 110010;
    convert(x);
}

void convert(int num)
{
    int copy = num;
    int i = 0;
    // if 100
    while (copy / 10 > 0)
    {
        // printf("%d",i);

        i++;
        copy = copy / 10;
    }
    i++;
    // printf("%d",i);

    int dec = 0;
    int count = 0;
    while (num > 0 && (count< i))
    {
        dec += ((num%10)*pow(2,(count)));
        // i--;
        count++;
        num = num / 10;
    }
    dec += ((num%10)*pow(2,i--));
    printf("%d",dec);
    return;
}