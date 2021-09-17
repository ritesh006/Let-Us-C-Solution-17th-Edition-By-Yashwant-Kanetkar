#include<stdio.h>
#include<math.h>

int main()
{
    int c,d;
    printf("Please Enter First location: ");// Taking first location  
    scanf("%d",&c);// c= first location

    printf("Please Enter Second Location : ");// Taking Second Location 
    scanf("%d",&d);// d = second Location 
    
    int temp = c ;
    c = d ;
    d = temp ;
    printf("c = %d  d = %d ",c,d);//printing interchange content  

    return 0;
}

