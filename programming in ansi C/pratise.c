#include <stdio.h>
#define PERIOD 10
#define PRINCIPLE 5000

int main()
{
    int year;
    float amount, inrate, value;
    amount = PRINCIPLE;
    inrate = 0.11;
    year = 0;

    while (year <= PERIOD)
    {
        printf("%d %f\n, year, amount");
        value = amount + inrate * amount;
        year = year +1;
        amount = value;
    }
}