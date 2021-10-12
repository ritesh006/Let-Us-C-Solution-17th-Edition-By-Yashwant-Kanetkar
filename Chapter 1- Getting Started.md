# [A] Which of following is invalid C constant and why?

|             |             |
| ----------- | ----------- |
|             |             |
'3.15' = invalid constant decimal point available 
35,550 = invalid constant comm is available 
3.25e2 = valid constant  
2e-3 = valid constant. 
eLearning = Invalid constant beacause its not single digit 
"show" = invalid constant because of inverted commm 
'quest' = Invalid constant beacause its not single digit  
2^3 = invalid constant not a right way to wright exponential constant 
4 6 5 2 = invalid due to spaces 
 

# [B] Which of the following are invalid variable names and why?

|    |    |
| ----------- | ----------- |
| 
B'day       = invald quote not allowed 
int         = invalid int is data type 
$hello      = invalid special charactor not allowed 
#HASH       = invalid special charactor not allowed 
dot.        = ivalid full stop not allowd  
number      = valid  
totalArea   = valid 
_main()     = invalid main is function 
temp_in_Deg = valid 
total%      = invalid special charactor not allowed 
1st         = invalid starting with number not allowed 
sttack-queue= invalid dash is not allowed 
variable name= space is not allowed 
%name%      = invalid special charactor not allowed 
salary      = valid 


# [C] State whether the following statements are True or False:

|   |   |
|----|-----|
(a) T 
(b) T 
(c) T 
(d) T 
(e) T 
(f) T 
(g) T 
(h) T 
(i) T 
(j) F 
(k) T 
(i) F 


# [D] Match the Following:


|    |  |
| ----------- | ----------- |
(a)\n 	       -     Escape sequence
(b)3.145	   -     Real constant
(c)-6513	   -     Integer constant
(d) ’D’	       -     Character constant
(e) 4.25e-3	    -    Exponential form
(f) main( )	    -    Function
(g) %f, %d, %c-	    Format specifier
(h) ;	            Statement terminator
(i) Constant-	    Literal
(j) Variable	-    Identifier
(k) &	         -   Address of operator
(l) printf( )	  -  Output function
(m) scanf( )	 -   Input function


# [E] Point out errors, if any, in the following programs:

(a)

    int main() 
    { 
    int a, float b, int c; 
    a=25; b=3.24; c= a + b * b - 35; 
    } 

ANSWER: No Error 


(b) 

    #include<stdio.h> 
    int main() 
    { 
        int a=35; float b = 3.24; 
        printf("%d%f%d",a,b+1.5,235); 
    } 

 ANSWER: No Error 


(c) 

    #include<stdio.h> 
    int main() 
    { 
        int a,b,c; 
        scanf("%d%d%d",a,b,c); 
    } 
    
ANSWER: & Identifer is missing in Scanf function. 


(d) 

    #include<stdio.h> 
    int main() 
    { 
        int m1,m2,m3 
        printf("Enter value of marks in 3 subjects") 
        scanf("%d%d%d",m1.m2,m3) 
        printf("You Entered %d %d %d",m1,m2,m3) 
    } 
 
ANSWER: Semicolun is missing in all statements. 



# [F] Attempt the following questions:  

(a) Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees. 

SOLUTION: 
    # include <stdio.h> 
    int main() 
    {
        float temp; 
        printf("Enter Temprature in Fahrenheit: "); 
        scanf("%f",&temp); 

        float degree = (temp - 32) * 5/9;  

        printf("Your Tempreture in Degree is: %f",degree); 

        return 0; 
    }



(b) The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle

SOLUTION: 


    # include <stdio.h>
    int main( )
    {
        int l, b, r, area1, perimeter;
        float area2, circum;
        printf("\nEnter Length & Breadth of Rectangle: ");
        scanf("%d %d", &l, &b);
        area1 = l * b;
        perimeter = 2 * l + 2 * b;
        printf("Area of Rectangle = %d\n", area1);
        printf("Perimeter of Rectangle = %d\n", perimeter);
        printf("\n\nEnter Radius of circle: ");
        scanf("%d", &r );
        area2 = 3.14 * r * r; 
        circum = 2 * 3.14 * r; 
        printf("Area of Circle = %f\n", area2);
        printf("Circumference of Circle = %f\n", circum);
        return 0;
    }


(c) Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel
to its shorter sides. Write a program to calculate and print
paper sizes A0, A1, A2, … A8.

SOLUTION:

    # include <stdio.h>
    int main( )
    {
        int a0ht, a0wd ;
        int a1ht, a1wd, a2ht, a2wd ;
        int a3ht, a3wd, a4ht, a4wd ;
        int a5ht, a5wd, a6ht, a6wd ;
        int a7ht, a7wd, a8ht, a8wd ;
        a0ht = 1189 ;
        a0wd = 841 ;
        printf ( "Size of A0 paper Height = %d Width = %d\n", a0ht, a0wd ) ;
        a1ht = a0wd ;
        a1wd = a0ht / 2 ;
        printf ( "Size of A1 paper Height = %d Width = %d\n", a1ht, a1wd ) ;
        a2ht = a1wd ;
        a2wd = a1ht / 2 ;
        printf ( "Size of A2 paper Height = %d Width = %d\n", a2ht, a2wd ) ;
        a3ht = a2wd ;
        a3wd = a2ht / 2 ;
        printf ( "Size of A3 paper Height = %d Width = %d\n", a3ht, a3wd ) ;
        a4ht = a3wd ;
        a4wd = a3ht / 2 ;
        printf ( "Size of A4 paper Height = %d Width = %d\n", a4ht, a4wd ) ;
        a5ht = a4wd ;
        a5wd = a4ht / 2 ;
        printf ( "Size of A5 paper Height = %d Width = %d\n", a5ht, a5wd ) ;
        a6ht = a5wd ;
        a6wd = a5ht / 2 ;
        printf ( "Size of A6 paper Height = %d Width = %d\n", a6ht, a6wd ) ;
        a7ht = a6wd ;
        a7wd = a6ht / 2 ;
        printf ( "Size of A7 paper Height = %d Width = %d\n", a7ht, a7wd ) ;
        a8ht = a7wd ;
        a8wd = a7ht / 2 ;
        printf ( "Size of A8 paper Height = %d Width = %d\n", a8ht, a8wd ) ;
        return 0 ;
    }



-------------------------END---------------------------