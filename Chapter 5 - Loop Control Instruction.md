# [A] What will be the output of the following programs:

(a) 

    # include <stdio.h>
    int main( )
    {
    int i = 1 ;
    while ( i <= 10 ) ;
    {
    printf ( "%d\n", i ) ;
    i++ ;
    }
    return 0 ;
    }

Answer: No Output Indefinite while loop because of a ‘;’ at the end of while

(b)

    # include <stdio.h>
    int main( )
    {
    int x = 4, y, z ;
    y = --x ;
    z = x-- ;
    printf ( "%d %d %d\n", x, y, z ) ;
    return 0 ;
    }

Answer: 2 3 3


(c)

    # include <stdio.h>
    int main( )
    {
    int x = 4, y = 3, z ;
    z = x-- - y ;
    printf ( "%d %d %d\n", x, y, z ) ;
    return 0 ;
    }

Answer: 3 3 1


(d)

    # include <stdio.h>
    int main( )
    {
    while ( 'a' < 'b' )
    printf ( " malayalam is a palindrome\n" ) ;
    return 0 ;
    }

Answer: ‘malayalam is a palindrome’ will be printed indefinitely


(e)

    # include <stdio.h>
    int main( )
    {
    int i ;
    while ( i = 10 )
    {
    printf ( "%d\n", i ) ;
    i = i + 1 ;
    }
    return 0 ;
    }

Answer: 10 will be printed indefinitely


(f)

    # include <stdio.h>
    int main( )
    {
    float x = 1.1 ;
    while ( x == 1.1 )
    {
    printf ( "%f\n", x ) ;
    x = x – 0.1 ;
    }
    return 0 ;
    }

Answer: No output. Since a float variable is compared with double constant, the condition will not satisfy.

# [B] Attempt the following:

(a) Write a program to print all the ASCII value and their equivalent 
    characters using a while loop. The ASCII values vary from 0 to 255.


    # include <stdio.h>
    int main()
    {
        int i = 0;
        while(i<=255)
        {
            printf("%d    %c   \n",i,i);
            i++;
        }
     return 0;
}
           

(b) Write a program to print out all Armstrong numbers between 1 and 500. If sum of 
    cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = (1* 1 *1) + (5 * 5 * 5) + (3 * 3 * 3).



    # include <stdio.h>
    int main()
    {
     int i=1,ans,a,b,c;           /* Initalise variable */
   
   
         while(i<=500)           /* while i less than 500 loop repeat 500 time to satisfy ;*/
    {

    a = i % 10;             /* taking remainder and separating each digit*/
    a= a*a*a;               /* Multiply 3 time for cube */

    b = (i / 10) %10;       
    b = b*b*b;

    c = (i / 100) %10;
    c = c*c*c;

    ans = a+b+c;

    if (ans == i)           /* if ans equal to i it will be a armstrong number. */
    {
        printf("%d \n",i);
    }
        i++;
    }
    return 0;
    }



(c) Write a program for a matchstick game being played between the computer and a 
    user. Your program should ensure that the computer always wins. Rules for the 
    game are as follows:

                 
    - There are 21 matchsticks.
    - The computer asks the player to pick 1,2,3 or 4 matchsticks.
    - After the person picks, the computer does its picking.
    - Whoever is forced to pick up the last matchstick loses the game. 

    