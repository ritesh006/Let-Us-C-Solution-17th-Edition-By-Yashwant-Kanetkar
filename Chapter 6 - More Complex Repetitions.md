# [A] Answer the following:

(a) The break statement is used to exit from:
   
    1. an if statement
    2. a for loop
    3. a program
    4. the main( ) function

Answer: (2) a for loop


(b) A do-while loop is useful when we want that lthe statements within the loop must 
    be executed:
    
    1. Only once
    2. At least once
    3. More than one
    4. None of the above

Answer: 2. At least Once 


(c) In what sequence the initialization, testing and execution of
    body is done in a do-while loop?

    1. Initialization, execution of body, testing
    2. Execution of body, initialization, testing
    3. Initialization, testing, execution of body
    4. None of the above

Answer: (1) Initialization, execution of body, testing



(d) Which of the following is not an infinite loop?

    1.  int i = 1 ;
        while ( 1 )
        {
        i++ ;
        }

    2. for ( ; ; ) ;

    3. int True = 0, false ;
        while ( True )
        {
        False = 1 ;
        }

    4.  int y, x = 0 ;
        do
        {
        y = x ;
        } while ( x == 0 ) ;

Answer: 3




(e) Which of the following statements are true for the following program?


    # include <stdio.h>
    int main( )
    {
    int x = 10, y = 100 % 90 ;
    for ( i = 1 ; i <= 10 ; i++ ) ;
    if ( x != y ) ;
    printf ( "x = %d y = %d\n", x, y ) ;
    return 0 ;
    }

    (1) The printf( ) function is called 10 times.
    (2) The program will produce the output x = 10 y = 10.
    (3) The ; after the if ( x != y ) would NOT produce an error.
    (4) The program will not produce any output.
    (5) The printf( ) function is called infinite times.

Answer:  (2) The program will produce the output x = 10 y = 10
         
(3) the ; after the if(x!=y) would not produce an error.



(f) Which of the following statement is true about a for loop used
    in a C program?

    (1) for loop works faster than a while loop.
    (2) All things that can be done using a for loop can also be
    done using a while loop.
    (3) for ( ; ; ) implements an infinite loop.
    (4) for loop can be used if we want statements in a loop to
    get executed at least once.
    (5) for loop works faster than a do-while loop.

Answer:
(2), (3), (4).



# [B] Attempt the following questions:

(a) Write a program to print the multiplication table of the number entered by the 
    user. The should get displayed in the following form:
    29 * 1 = 29 <br>
    29 * 2 = 58


    # include <stdio.h>
    int main()
    {
        int inputNum, i,ans;

        printf("Enter Number: ");       
        scanf("%d",&inputNum);

        printf("Your Multiplication Table is: \n");

        for (i = 1; i <= 10; i++)
        {
            ans=inputNum*i;
            printf("%d * %d  = %d\n",inputNum,i,ans);
        }

        return 0;
    }



(b) According to a study, the approximate level of intelligence of a person can be 
    calculated using the following formula: <br>
    i = 2 + (y + 0.5 x) <br>
    Write a program that will produce a table of values of i, y and x, where y varies from 1 to 6 and for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.

    
    #include<stdio.h>
    int main()
    {
        int y;  //y is integer 1 to 6
        float i, x;

        //print column names
        printf("i\t\ty\tx\n");

        //for loop for y range (1 to 6)
        for(y=1;y<=6;y++)
        {
            //for loop for every value y range (5.5 to 12.5 step .5)
            for(x=5.5;x<=12.5;x=x+0.5)
            {
                //formula for intelligence
                i = 2+(y+0.5*x);

                //print the values
                printf("%.2f\t\t%d\t%.2f\n",i,y,x);
            }
        }
    }



()