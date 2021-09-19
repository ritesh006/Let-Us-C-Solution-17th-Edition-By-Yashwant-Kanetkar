# [C] Answer the following questions.

 (a) Any year intered through the keyboard. Write a function to determine whether the year is leap year or not. 


 SOLUTION:

    # include <stdio.h>
    int leap(int year);
    int main()
    {
        int year,ans;
        printf("Enter Year to Know leap Year or Not: ");
        scanf("%d",&year);
        if ((leap(year)))
        {
            printf("Year is Leap Year.");
        }
        else
            printf("Year is Not Leap Year");

        return 0;
    }

    int leap(int year)
    {
        if(year%4==0 || year%400==0 && year%100!=0)
        {
            return 1;
        }
        else
            return 0;
    }



(B) A positive integer is intered through the keyboard. Write a function to obtain the Prime factors of this number.

For example, prime factors of 24 are 2,2,2 and 3, wherea prime factors of 35 are 5 and 7.


SOLUTION:

