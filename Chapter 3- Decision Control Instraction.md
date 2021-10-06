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

Answer: There should be ‘&’ before variable in scanf().

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

(a) Multiple statements             -   (5) {}
(b) else block                      -   (4) optional
(c) ;                               -   (7) Null statement
(d) <> <= >= == !=                  -   (3) Relational operator
(e) ==                              -   (2) Comparison Operator
(f) + - * / %                       -   (6) Arithmatic operator 
(g) =                               -   (1) Assignment operator 
(h) Default Control instruction     -   (9) Sequence
(i) Decision Control instruction    -   (8) if - else



# [E] Which of the following are valid ifs:

(a) if(-25)
(b) if(3.14)
(c) if(a)
(d) if(a+b)
(e) if(a>=b)




# [F] Attempt the following questions:

(a)
/* If ages of Ram, Shaym and Ajay are input through the keyboard write a program to determine the 
youngest of the three*/

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
