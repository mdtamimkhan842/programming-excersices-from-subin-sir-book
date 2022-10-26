#include <stdio.h>
int main ()
{
    float a,b,c, sum;
    float ave;
    scanf("%f %f %f", &a, &b, &c);
    sum = a+b+c;
    ave = sum/3;
    printf("%0.2f\n", ave);

    return 0;
}
