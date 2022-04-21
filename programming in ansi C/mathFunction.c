#include <stdio.h>
#include <math.h>
#define PI 3.14
#define MAX 180

int main()
{
    int angle;
    float x, y;
    angle = 0;
    printf("            Angle   Cos(angle)\n\n");
    while (angle <= MAX)
    {
        x = (PI/MAX)*angle;
        y = cos(x);
        printf("%15d %13.3f\n", angle, y);
        angle = angle + 10;
    }
}