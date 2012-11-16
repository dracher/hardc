#include <stdio.h>

float c_to_f(float n);

int main (int argc, char const *argv[])
{
	float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = c_to_f(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;       
    }
	return 0;
}

float c_to_f(float n)
{	
	float celsius;
	celsius = (5.0/9.0) * (n-32.0);
	return celsius;
}