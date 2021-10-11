# [A] If a = 10, b = 12, c = 0, find the values of the expressions in the           following  table:


Expression                          Value

a != 6 && b > 5                        1
a == 9 || b < 3                        0
! ( a < 10 )                           1
! ( a > 5 && c )                       1
5 && c != 8 || !c                      1




# [B] What will be the output of the following programs:


(a) 

    # include <stdio.h>
    int main( )
    {
        int i = 4, z = 12 ;
        if ( i = 5 || z > 50 )
        printf ( "Dean of students affairs\n" ) ;
        else
        printf ( "Dosa\n" ) ;
        return 0 ;
    }


OUTPUT: Dean of students affairs



(b)

    # include <stdio.h>
    int main( )
    {
        int i = 4, j = -1, k = 0, w, x, y, z ;
        w = i || j || k ;
        x = i && j && k ;
        y = i || j && k ;
        z = i && j || k ;
        printf ( "w = %d x = %d y = %d z = %d\n", w, x, y, z ) ;
        return 0 ;
    }

OUTPUT: w = 1 x = 0 y = 1 z = 1


(c)

    # include <stdio.h>
    int main( )
    {
        int x = 20, y = 40, z = 45 ;
        if ( x > y && x > z )
        printf ( "biggest = %d\n", x ) ;
        else if ( y > x && y > z )
        printf ( "biggest = %d\n", y ) ;
        else if ( z > x && z > y )
        printf ( "biggest = %d\n", z ) ;
        return 0 ;
    }

OUTPUT: biggest = 45


(d)

    # include <stdio.h>
    int main( )
    {
    int i = -4, j, num ;
    j = ( num < 0 ? 0 : num * num ) ;
    printf ( "%d\n", j ) ;
    retrun 0 ;
    }

OUTPUT: compiler depended value (unpredictable) 


(e)

    # include <stdio.h>
    int main( )
    {
    int k, num = 30 ;
    k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;
    printf ( "%d\n", num ) ;
    return 0 ;
    }

OUTPUT: 30



# [C] Point out the errors if any. in the following programs:

(a)
    #include<stdio.h>
    int main()
    {
        char spy='a', password='z';
        if (spy=='a' or password=='z')
            printf("All the birds are safe in the nest\n);
        return 0;
    }

Ans: Logical OR use as (||) this not (or) like this.


(b) 
    # include <stdio.h>
    int main( )
    {
        int i = 10, j = 20 ;
        if ( i = 5 ) && if ( j = 10 )
        printf ( "Have a nice day\n" ) ;
        return 0 ;
    }

Ans: Double if is not allowed in single row.


(c)
    # include <stdio.h>
    int main( )
    {
        int x = 10, y = 20 ;
        if ( x >= 2 and y <= 50 ) ;
        printf( "%d\n", x ) ;
        return 0 ;
    }

Ans: Logical AND use as (&&) this not (and) like this.


(d)
    # include <stdio.h>
    int main( )
    {
        int x = 2 ;
        if ( x == 2 && x != 0 ) ;
        printf ( "Hello\n" ) ;
        else
        printf ( "Bye\n" ) ;
        return 0 ;
    }

Ans: Termination Semicoln ; not allowed in if statement.


(e)
    # include <stdio.h>
    int main( )
    {
        int j = 65 ;
        printf ( "j >= 65 ? %d : %c\n", j ) ;
        return 0 ;
    }

Ans: No Error


(f)
    # include <stdio.h>
    int main( )
    {
        int i = 10, j ;
        i >= 5 ? j = 10 : j = 15 ;
        printf ( "%d %d\n", i, j ) ;
        return 0 ;
    }

Ans: paranthesis required (j = 10) and (j = 15)


(g)
    # include <stdio.h>
    int main( )
    {
        int a = 5, b = 6 ;
        ( a == b ? printf ( "%d\n", a ) ) ;
        return 0 ;
    } 

Ans: Second condition after : this not written 


(h)
    # include <stdio.h>
    int main( )
    {
        int n = 9 ;
        ( n == 9 ? printf ( "Correct\n" ) ; : printf ( "Wrong\n" ) ; ) ;
        return 0 ;
    }


Ans: Remove the ; after both printf( ).


# [D] Attempt the following questions:

(a)
if the three sides of a triangle are entered through the keyboard, write a program
to check wheter the triangle is isosceles, equilateral, scalene?

program:

    # include <stdio.h>
    int main( )
    {
        int a, b, c, ans;

        printf("Enter Side A: ");
        scanf("%d",&a);
        printf("Enter Side B: ");
        scanf("%d",&b);
        printf("Enter Side C: ");
        scanf("%d",&c);

            if ((a==b && b!=c) || (a==c && b!=c) || (b==c && c!=a))
            {
                
            printf("Triangle is ISCOCELES");
                
            }
            if (a==b && b==c)
            {
                printf("Triangle is Equilateral");
            } 
            if (a!=b!=c)
            {
                printf("Triangle is Scalane");
            }

            else 
            {
                a= b*b + c*c - 2*b*c;
            }

        return 0;
    }



(b) In digital world colors are specified in Red-Green-Blue (RGB) format, with values
    or R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magent-Yellow-Black (CMYK) format, with values of C,
    M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per following formula.
    While = Max(Red/255, Green/255, Blue/255)
    Cyan = (White-Red/255)/(White)
    Magenta = (White-Green/255)/(White)
    Yellow = (White-Blue/255)/(White)
    Black = 1-White
    Note that of the RGB values are all 0, then the CMY values are all 0 and the K value is 1.


    # include <stdio.h>

    int main()
    {
    float Input_red, Input_green, Input_blue, white, cyan, magenta, yellow, black;
    /* Initialise variable */
    float cal_red, cal_green, cal_blue;
    printf("Enter Value of Red (0 to 255):  ");    /* Message for User */
    scanf("%f",&Input_red);                              /* Taking input from user decimal range 0 to 255*/                   

    printf("Enter Value of Green (0 to 255):  ");          /* Message for User */
    scanf("%f",&Input_green);                             /* Taking input from user decimal range 0 to 255*/                   
    

    printf("Enter Value of Blue (0 to 255):  ");             /* Message for User */
    scanf("%f",&Input_blue);                                /* Taking input from user decimal range 0 to 255*/

    cal_red = Input_red / 255;                               /*Calculating value of red */
    cal_green = Input_green / 255;                           /* Calculating value of green */
    cal_blue = Input_blue / 255;                             /* Calculating value of blue */
    
    white = cal_red;
    
    if (white < cal_green)
    {
        white = cal_green;
    }
        else if (white < cal_blue)
        {
            white = cal_blue;
        }
    
    cyan = (white - cal_red)/white;                       /* Calculating value Cyan*/
    magenta = (white - cal_green)/white;                  /* Calculating value Magenta*/
    yellow = (white - cal_blue)/white;                    /* Calculating value of Yellow */
    black =  1 - white;                                   /* Calculating value of Black */


    printf("Cyan is: %0.2f \n",cal_red);
    printf("Magenta is: %0.2f \n",magenta);
    printf("Yellow is: %0.2f \n",yellow);
    printf("Black is: %0.2f \n",black);
    
    return 0;
    }



(c) A certain grade of steel is graded according to the following conditions:
    Hardness must be greater than 50
    Carbon content must be less than 0.7
    Tensile strength must be greater than 5600
    The grades are as follows:
    Grade is 10 if all three conditions are met
    Grade is 9 if conditions (i) and (ii) are met
    Grade is 8 if conditions (ii) and (iii) are met
    Grade is 7 if conditions (i) and (iii) are met
    Grade is 6 if and only one conditions is met
    Grade is 5 is none of the conditions are met
    Write a c program, which will require the user to give value of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel. 



    # include <stdio.h>

    int main()
    {  
    int input_Hardness, input_TensileStrength;                /* Initialise Variable */
    float input_Carbon;
    
    printf("Enter Hardness of the Steel: ");                  /* Message for user */
    scanf("%d",&input_Hardness);                              /* Taking input from user */

    printf("Enter Carbon Content of the Steel: ");           /* Message for user */
    scanf("%f",&input_Carbon);                               /* Taking input from user */

    printf("Enter Tensile Strength of the Steel: ");         /* Message for user */
    scanf("%d",&input_TensileStrength);                      /* Taking input from user */


    if (input_Hardness > 50 && input_Carbon < 0.7 && input_TensileStrength > 5600 )
    {
        /* Comparing all three condition for Grade 10 */
        printf("All three condition are meet with requirement so Grade of the steel is 10.");
    }
        else if (input_Hardness > 50 && input_Carbon < 0.7)
        {
            /* Comparing first 2 conditions for Grade 9 */
          printf("First Two Conditon are meet with requirement so grade of the steel is 9.");
        }
            else if (input_Carbon < 0.7 && input_TensileStrength > 5600)
            {
                /* Comparing 2nd and 3rd condition for Grade 8 */
                printf("Second and Third condition are meet with requirement so grade of the steel is 8.");
            }
                else if (input_Hardness > 50 && input_TensileStrength > 5600)
                {
                    /* Comparing 1st and 3rd conditio for grade 7 */
                    printf("First and Third condition are meet with requirement so grade of the steel is 7.");
                }
                    else if (input_Hardness > 50 || input_Carbon < 0.7 || input_TensileStrength > 5600)
                    {
                        /* Comparing any one conditon to be true for the grade 6 */
                        printf("Only 1 conditon are meet with the requirement so grade of the steel is 6");
                    }
                        else 
                        {  
                            /* None of the condition met with requirement then Grade of Steel is 5 */
                            printf("None of the conditon are meet with requirement so grade of the steel is 5.");
                        }

    return 0;
    }



(d) The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square of the height (in meters). Write a c program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table: 

BMI Categary            BMI 
Starvation              <15 
Anorexic                15.1 to 17.5    
Underweight             17.6 to 18.5    
Ideal                   18.6 to 24.9    
Overweight              25   to 25.9    
Obese                   30   to 30.9    
Morbidly Obese          >= 40   