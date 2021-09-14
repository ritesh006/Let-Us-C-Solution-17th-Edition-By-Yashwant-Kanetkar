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