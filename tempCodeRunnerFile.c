#include<stdio.h>
#include<math.h>

int main()
{
    float t,v,wcf;
    printf("Please Enter Temprature: ");// Enter temprature in Degree
    scanf("%f",&t);//t= temprature
    printf("Please Enter Air Velocity: ");//Enter Air Velocity 
    scanf("%f",&v);// v= velocity 
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v , 0.16);
    // calculate wind chill factor
    printf("Wind Chill Factor is: %0.2f",wcf);//print wind chill factor 

    return 0;
}

