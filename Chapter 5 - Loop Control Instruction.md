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



    # include <stdio.h>
    int main()
    {
        int input_user, total_matchstick=21, input_computer;

    while (total_matchstick != 0)
    {
        printf("Total Match Sticks: %d\n", total_matchstick);
        printf("Pick Matchstick 1, 2, 3 or 4: ");
        scanf("%d",&input_user);

        if(input_user > 4)
        {
            printf("Invalid Entry");
            break;
        }
        /* for computer choice we are taking maximum value by which
          we can get the max possible value of sticks which is 5 */
        input_computer = 5 - input_user;
        
        /* with the help of this code we will take only 4 rounds to 
            decide that user loses the match. */
        
        printf("Computer picks up the %d match sticks.\n", input_computer);
        total_matchstick = total_matchstick - input_user - input_computer;
        
        if(total_matchstick == 1)
        {
            printf("\nYou have been lost via computer.");
            break;
        }
    }
        return 0;
    }



(d) Write a program to enter numbers till the user wants. At the end it should 
    display the count of positive, negative and zeros entered.


    #include<stdio.h>
    int main()
    {
        int inputNum, positive=0, negative=0, zeroes=0;
    char inputChoice;

    while(1)  /* for infinit loop */
    {
        printf("Enter number: ");
        scanf("%d",&inputNum);

        printf("Do you want to continue (press y/n): ");
        scanf(" %c",&inputChoice);  /* add blank place before %c other wise scanf
        function did not work */

        if(inputNum > 0)
        {
            positive++;  /* increment if positive */
        }

            if(inputNum < 0)
            {
                negative++; /* increment if negative */
            }
                if(inputNum == 0)
                {
                    zeroes++;       /* increment if zero */
                }

        if(inputChoice== 'n' || inputChoice == 'N')     /* if choice is n then break loop */
        {
            printf("Total Positive: %d\n",positive);
            printf("Total Negative: %d\n",negative);
            printf("Total Zeroes: %d\n",zeroes);
            break;    
        }
            if(inputChoice == 'y' || inputChoice =='Y')/* if input y continue loop */
                continue;

    }
         return 0;
    }




(e) Write a program to receive an integer and find its octal equivalent. 
    (Hint: To obtain octal equivalaent of an integer, divide it continuously
    by 8 till dividend doesn't become zero, then write the remainders obtained
    in reverse direction.)














(f) Write a program to find a range of a set of numbers entered through the keyboard.
    Range is the difference between the smallest and biggest number in the list.






    

