#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,t;

    printf("Please Enter Cartesian Co-ordinate for X: ");
    scanf("%f",&x);
    printf("Please Enter Cartesian Co-ordinate for y: ");
    scanf("%f",&y);

    r=sqrt(x*x+y*y);
    t= atan2(y,x); 
    printf("r= %f  t= %f\n",r,t);
    return 0;
}

