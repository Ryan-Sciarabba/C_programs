#include <stdio.h>
int main (void)
{

int fahrenheit;
double celsius;

printf("Enter the temperature in degrees fahrenteit:\n\n\n\n");
scanf("%d", &fahrenheit);
celsius = (5.0/9.0) * (fahrenheit-32);
printf("The cenverted tempterature is %1f\n", celsius);

return 0;

}
