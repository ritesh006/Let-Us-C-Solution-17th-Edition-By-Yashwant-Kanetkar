# include <stdio.h>
int main()
{
    float temp;
    printf("Enter Temprature in Fahrenheit: ");
    scanf("%f",&temp);

    float degree = (temp - 32) * 5/9;

    printf("Your Tempreture in Degree is: %0.2f",degree);

    return 0;
}