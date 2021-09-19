# [D] Write a program which to find the grace marks for a student
using switch. The user should enter the class obtained by the
student and the number of subjects he has failed in. Use the
following logic:

    If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace. Otherwise the grace is of 5 marks per subject.

    If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. Otherwise the grace is of 4 marks per subject.
    
    If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace. Otherwise the grace is of 5 marks.


SOLUTION: 
        #include<stdio.h>
        int main()
        {
            int class,fail;
            printf("enter class obtained: \n");
            scanf("%d",&class);

            printf("enter count of fail subject: \n");
            scanf("%d",&fail);

                switch(class)

                {
                    case 1:
                        if(fail>3){
                            printf("You dont get any grace");

                        }
                        else
                        {
                            printf("you will get five marks grace per subject");
                        }
                    break;


                    case 2:
                        if(fail>2){
                            printf("You dont get any grace");

                        }
                        else
                        {
                            printf("you will get four marks grace per subject");
                        }
                    break;

                    case 3:
                        if(fail>1){
                            printf("You dont get any grace");

                        }
                        else
                        {
                            printf("you will get five marks.");
                        }
                    break;

                default:
                    printf("ok");
                }
            return 0;
    }

