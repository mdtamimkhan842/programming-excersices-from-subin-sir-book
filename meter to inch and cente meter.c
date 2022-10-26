#include <stdio.h>
int main ()
{
    float n, i, inch;
    float feet;
    scanf("%f", &n);
    feet = n*3.28;
    inch  = (feet-(int)feet)*12;

    printf("%d feet %0.2f inch\n",(int)feet,inch);
    return 0;
}
