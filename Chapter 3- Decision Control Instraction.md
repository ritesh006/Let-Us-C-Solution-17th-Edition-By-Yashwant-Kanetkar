# [A] What will be the output of the following programs:

(a) 

    # include <stdio.h> 
    int main( ) 
    { 
    int a = 300, b, c ; 
    if ( a >= 400 ) 
    b = 300 ; 
    c = 200 ; 
    printf ( "%d %d\n", b, c ) ; 
    return 0 ; 
    } 

Answer: b will contain some garbage value and c will be equal to 200


(b)

    # include <stdio.h>
    int main( )
    {
    int x = 10, y = 20 ;
    if ( x == y ) ;
    printf ( "%d %d\n", x, y ) ;
    return 0 ;
    }

Asnwer: Answer: 10 20


(c)

    # include <stdio.h>
    int main( )
    {
    int x = 3 ;
    float y = 3.0 ;
    if ( x == y )
    printf ( "x and y are equal\n" ) ;
    else
    printf ( "x and y are not equal\n" ) ;
    return 0 ;
    }

Answer: x and y are equal


(d)

    # include <stdio.h>
    int main( )
    {
    int x = 3, y, z ;
    y = x = 10 ;
    z = x < 10 ;
    printf ( "x = %d y = %d z = %d\n", x, y, z ) ;
    return 0 ;
    }

Answer: x = 10 y = 10 z = 0


(e)

    # include <stdio.h>
    int main( )
    {
    int i = 65 ;
    char j = 'A' ;
    if ( i == j )
    printf ( "C is WOW\n" ) ;
    else
    printf( "C is a headache\n" ) ;
    return 0 ;
    }

Answer: C is WOW 



# [B] Point out the errors, if any, in the following programs:

(a)

    # include <stdio.h>
    int main( )
    {
    float a = 12.25, b = 12.52 ;
    if ( a = b )
    printf ( "a and b are equal\n" ) ;
    return 0 ;
    }


Answer: No errors


(b)

    # include <stdio.h>
    int main( )
    {
        int j = 10, k = 12 ;
        if ( k >= j )
        {
            {
                k = j ;
                j = k ;
            }
        }
         return 0 ;
    }

Answer: No errors.


(c)

    # include <stdio.h>
    int main( )
    {
    if ( 'X' < 'x' )
    printf ( "ascii value of X is smaller than that of x\n" ) ;
    } 

Answer: No error.


(d)

    # include <stdio.h>
    int main( )
    {
    int x = 10 ;
    if ( x >= 2 ) then
    printf ( "%d\n", x ) ;
    return 0 ;
    }

Answer: then is not used in C.


(e)

    # include <stdio.h>
    int main( )
    {
    int x = 10, y = 15 ;
    if ( x % 2 = y % 3 )
    printf ( "Carpathians\n" ) ;
    return 0 ;
    }

Answer: = is not used to compare. == is used to compare in C.



(g)

    # include <stdio.h>
    int main( )
    {
    int a, b ;
    scanf ( "%d %d", a, b ) ;
    if ( a > b ) ;
    printf ( "This is a game\n" ) ;
    else
    printf ( "You have to play it\n" ) ;
    return 0 ;
    }

Answer: There should be ???&??? before variable in scanf().

# [C] State whether the following statements are Treu or False:

(a) ; is a valid Statement.

Answer: True 

(b) Ifs can be nested.

Answer: True

(c) It there are multiple statements in if or else block they should
be enclosed within a pair of {}.

Answer: True

(d) If can occur within a if block but not in the else block.

Answer: False

(e) By default there is only one statement in if block and only one
in the else block

Answer: False

(f) Nothing happens on execution of a null statement.

Answer: True



# [D]  Match the following pairs

(a) Multiple statements                 -   (5) {}    
(b) else block                          -   (4) optional        
(c) ;                                   -   (7) Null statement    
(d) <> <= >= == !=                      -   (3) Relational operator  
(e) ==                                  -   (2) Comparison Operator  
(f) + - * / %                           -   (6) Arithmatic operator   
(g) =                                   -   (1) Assignment operator       
(h) Default Control instruction         -   (9) Sequence          
(i) Decision Control instruction        -   (8) if - else      



# [E] Which of the following are valid ifs:

(a) if(-25)  
(b) if(3.14)        
(c) if(a)      
(d) if(a+b)  
(e) if(a>=b)        




# [F] Attempt the following questions:

(a) A five-digit number is entered throught the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.

    #include<stdio.h>

    int main()
    {
        int num,a,b,c,d,e,x;

        printf("Enter a five digit number : ");
        scanf("%d", &num);

        //separating digits of the number
        e = num % 10;
        d = (num/10) % 10;
        c = (num/100) % 10;
        b = (num/1000) % 10;
        a = (num/10000);

        //reversing the number
        x = e*10000 + d*1000 + c*100 + b*10 + a;
        printf("\n%d", x);

        if(x == num)
            printf("\n\nThe reverse of the number %d is same as actual number.", num);


        return 0;
    }




(b) /* If ages of Ram, Shaym and Ajay are input through the keyboard write a program  to determine the  youngest of the three*/

    #include<stdio.h>
    int main()
    {
        int r,s,a;
        printf("Please enter Ram, Shyam and Ajay age: ");
        scanf("%d %d %d",&r,&s,&a);

        if(r<s)
        {
            if(r<a)
            {
            printf("Ram is YOnger");     
            }
        }
        
        if (s<r)
            {
                if(s<a)
                printf("Shayam is younger");
                else 
            {
                printf("Ajay is younger");
            }
            }
            
            
    }   


(c) Write a program to check whether a triangle is valid or not, when
the three angles of the triangle arre entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 
180 degrees.

    #include<stdio.h>

    int main()
    {
        int a, b, c;                            // three variable for three angles

        printf("Enter three angles: ");         //message for user
        scanf("%d %d %d",&a,&b,&c);             //taking input from user 

        c=a+b+c;                                // Addition of three variable

        if (c == 180)                           // Taking decision if triangle is valid or not
        {
            printf("Triangle is Valid and Total Degree is: %d",c);
        }

        else
        {
            printf("Triangle is Not Valid and Total Degree is: %d",c);
        }
        
        return 0;
    }


(d) Write a program to find the absolute value of a number entered
    through the keyboard.

    #include<stdio.h>
    int main()
    {
        int num,ans;                                // Declare Variable

        printf("Enter Number: ");                   // Message for user
        scanf("%d",&num);                           // Taking input from user
        ans = num;
        if (num > 0)                                // Taking decision if num greater than zero
        {
            printf("Absolute Value of %d is: %d",num,num);  // Print absolute value equal to num var
        }
        else                                         // Else num less than zero                        
        {
            num = num * -1;                       // Calculation for getting positive number
            printf("Absolute Value of is: %d\n",num);// Print absolute value of negative value 
        }

        return 0;
    }


(e) Given the length and breadth of a rectangle, write a program to find whether the  area of the rectangle is greater than its perimeter. For example, the area of the 
rectangle with length = 5 and breadth = 4 is greater than its perimeter.


    #include<stdio.h>

    int main()
    {   
        // Intialise Variable for length and breadth
        int length, breadth, perimeter, area; 

        //Message for user
        printf("Enter Length of Triangle: ");
        // Taking Input length from user
        scanf("%d",&length);

        // Message for user 
        printf("Enter Breadth of Triangle: ");
        // Taking Input Breadth from user
        scanf("%d",&breadth);

        //Calculating Perimeter
        perimeter = 2*(length + breadth);

        //Calculating Area
        area = length * breadth;

        // Comparing Area and Perimeter
        if (area > perimeter)
        {
        printf("Area of Triangle Greater Than its Perimeter");
        }
        else
        {
        printf("Area of Triangle Greater Than its Perimeter");
        }
        return 0;
    }


(f) Givern three points (x1,y1), (x2,y2), (x3,y3) write a program to check if all 
    the three points fall on on straight line.


    #include<stdio.h>

    int main()
    {
        int x1,x2,x3,y1,y2,y3,m,n;           // Initialise Variable

        printf("Enter X1 and Y1 points: "); // Message for user
        scanf("%d%d",&x1,&y1);              // Taking x1 y1 input from user

        printf("Enter X2 and Y2 points: "); // Message for user
        scanf("%d%d",&x2,&y2);              // Taking x2 y2 input from user

        printf("Enter X3 and Y3 points: "); // Message for user
        scanf("%d%d",&x3,&y3);              // Taking x3 y3 input from user

        m = (y2-y1)/(x2-x1);                // Calculating first slope

        n = (y3-y2)/(x3-x1);                // Calculating Second slope


        if (m==n)                           // If M equal to N then all three point will be on same line 
        {
        printf("All Three point fall on straight line");
        }
        else                                  // Else they do not lie on sam line
        printf("All point not fall on straight line");
        return 0;
    }



(g) Given the co-ordinates (x,y) of center of a circle and its radious, write a 
    program that will determine whether a point lies inside the circle, on the 
    circle or outside the circle.  (Hint: Use sqrt() and pow() functions)


    #include<stdio.h>
    #include<math.h>

    int main()
    {
        double x, y, r, cp;                      // Initialise variable

        printf("Enter Point X and Y: ");         // Message for User 
        scanf("%lf %lf", &x, &y);                // Taking input from user 

        printf("Enter Radious of Circle: ");     // Message for user 
        scanf("%ld", &r);

        cp = sqrt(pow(x, 2) + pow(y, 2));        // Calculating circle point 

        if (cp == r)                             // If cp equal to r point on circle
        {
        printf("Point Lies on The Cirle.");
        }

        else if (cp > r)                       // If cp greater than r point outside the circle
        {
            printf("Point Lies Outside The Cirle.");
        }

            else if (cp > r)                     // If cp less than r point insdie the circle 
            {
                printf("Point Lies Inside The Cirle.");
            }


        return 0;
    }



(h) Given a point (x,y) write a program to find out if it lies on the X-axis, Y-axis
    or on the origin.


    #include<stdio.h>

    int main()
    {
        int x, y;                                         // Initialise variable

        printf("Enter X and Y Point: ");                  // Message for user
        scanf("%d %d", &x, &y);                           // Taking input from user

    if(x == 0 & y == 0)                                // If x and y equal to 0 point lies on the origin
    {
        printf("The point lies on the origin.");
    }
        else if (x == 0 & y > 0)                        // If x equal to zero and y is greater than zero
        {
            printf("The point lies on the Y-Axis");      // Point lies on the Y axis
        }
            else if (y == 0 & x >0)                      // If Y equal to zero and x is greater than zero
            {
                printf("The point lies on the X-Axis");   // Point lies on the X axis
            }
            

        return 0;
    }
    


(i) According to Gregorian calendar, it was Monday on the date 01/01/01. If any year 
    is input through the keyboard write a program to find out what is the day on 1st
    January of this year.


    #include <stdio.h>

    int main ()
    {
    int year,days,d;

    printf("year?"); scanf("%d",&year);

    days = 365*year + (year-1)/4 - (year-1)/100 + (year-1)/400 ;

    d=days%7;//to find which day of week

    if(d==1)
    {
        printf("\n\n\tmonday");
    }
        else if(d==2)
        {
            printf("\n\n\ttuesday");
        }
            else if(d==3)
            {
             printf("\n\n\twednesday");
            }
                else if(d==4)
                {
                    printf("\n\n\tthursday");
                }  
                    else if(d==5)
                    {
                        printf("\n\n\tfriday");
                    }
                        else if(d==6)
                        {
                            printf("\n\n\tsaturday");
                        }
                            else if(d==0)
                            {
                                printf("\n\n\tsunday");
                            }  
    return(0);

    }


        
