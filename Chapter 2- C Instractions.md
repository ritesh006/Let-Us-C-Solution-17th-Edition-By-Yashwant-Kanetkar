# [A]

(a) Valid.

(b) Valid.

(c) "char" is a keyword and we cannot use keyword as a variable.

(d) lvalue required,as we cannot take any expression on LHS.

(e) a3 doesn't specify any operation.

(f) Valid.

(g) Valid.

(h) spaces are not allowed in variable names.

(i) Valid.

(j) "?"(symbol) is not any valid operator.

(k) lavlue required as LHS should not have any constant value or any expression.

(l) Valid.

(m) Length of character is one.



# [B] Evaluate the following expressions and show their hierarchy

(a)

ANSWER:
ans = 5 * 2 * 2 * 5 - 3 * 3 * 4 * 4 - 8 * 2 * 2 * 5 + 10 * 3 * 4 operation: *
ans = 10 * 2 * 5 - 3 * 3 * 4 * 4 - 8 * 2 * 2 * 5 + 10 * 3 * 4 operation: *
ans = 20 * 5 - 3 * 3 * 4 * 4 - 8 * 2 * 2 * 5 + 10 * 3 * 4 operation: *
ans = 100 - 3 * 3 * 4 * 4 - 8 * 2 * 2 * 5 + 10 * 3 * 4 operation: *
ans = 100 - 9 * 4 * 4 - 8 * 2 * 2 * 5 + 10 * 3 * 4 operation: *
ans = 100 - 36 * 4 - 8 * 2 * 2 * 5 + 10 * 3 * 4 operation: *
ans = 100 - 144 - 8 * 2 * 2 * 5 + 10 * 3 * 4 operation: *
ans = 100 - 144 - 16 * 2 * 5 + 10 * 3 * 4 operation: *
ans = 100 - 144 - 32 * 5 + 10 * 3 * 4 operation: *
ans = 100 - 144 - 160 + 10 * 3 * 4 operation: *
ans = 100 - 144 - 160 + 30 * 4 operation: *
ans = 100 - 144 - 160 + 120 operation: -
ans = -44 - 160 + 120 operation: -
ans = -204 + 120 operation: +
ans = -84


(b)

ANSWER:

res = 4 * 4 * 1 / 3 - 4 * 1 / 3 operation: *
res = 16 * 1 / 3 - 4 * 1 / 3 operation: *
res = 16 / 3 - 4 * 1 / 3 operation: /
res = 5 - 4 * 1 / 3 operation: *
res = 5 - 4 / 3 operation: /
res = 5 - 1 operation: -
res = 4


(C)

ANSWER:

s = 4.1 + 2.2 * 3.0 * 3.0 / 0.0 operation: *
s = 4.1 + 6.6 * 3.0 / 0.0 operation: *
s = 4.1 + 19.8 / 0.0 operation: /
Here we cannot Divide by 0


(d)

ANSWER:

R = 3.5 * 3.5 + 2 * 3.5 + 1 / 2 * 3.5 * 3.5 + 3.5 + 1 operation: *
R = 12.25 + 2 * 3.5 + 1 / 2 * 3.5 * 3.5 + 3.5 + 1 operation: *
R = 12.25 + 7.0 + 1 / 2 * 3.5 * 3.5 + 3.5 + 1 operation: *
R = 12.25 + 7.0 + 1 / 7.0 * 3.5 + 3.5 + 1 operation: *
R = 12.25 + 7.0 + 1 / 24.5 + 3.5 + 1 operation: /
R = 12.25 + 7.0 + 0.04081 + 3.5 + 1 operation: +
R = 19.25 + 0.04081 + 3.5 + 1 operation: +
R = 19.29081 + 3.5 + 1 operation: +
R = 22.79081 + 1 operation: +
S = 23.79081



# [C] Indicate the order in which the following expressions would be evaluated.

(a)

ANSWER:

g = 10 / 5 / 2 / 1 ; operation: /
g = 2 / 2 / 1 ; operation: /
g = 1 / 1 ; operation: /
g = 1 ; operation: =


(b)

ANSWER: 

Evaluation order would be:
b = 3 / 2 + 5 * 4 / 3 operation: /
b = 1 + 5 * 4 / 3 operation: *
b = 1 + 20 / 3 operation: /
b = 1 + 6 operation: +
b = 7 operation: =


(c)

ANSWER:

a = b = c = 3 + 4  
a = b = c = 7  operation: +
a = b = 7      operation: =
a = 7          operation: =


(d)

ANSWER:

x = 2 - 3 + 5 * 2 / 8 % 3 operation: *
x = 2 - 3 + 10 / 8 % 3 operation: /
x = 2 - 3 + 1 % 3 operation: %
x = 2 - 3 + 1 operation: -
x = -1 + 1 operation: +
x = 0 operation: =


(e)

ANSWER:

z = 5 % 3 / 8 * 3 + 4 operation: %
z = 2 / 8 * 3 + 4 operation: /
z = 0 * 3 + 4 operation: *
z = 0 + 4 operation: +
z = 4 operation: =


(f)

ANSWER:

y = z = -3 % -8 / 2 + 7 operation: -
y = z = -3 % -8 / 2 + 7 operation: -
y = z = -3 % -8 / 2 + 7 operation: %
y = z = -3 / 2 + 7 operation: /
y = z = -1 + 7 operation: +
y = z = 6 operation: =
y = 6 operation: =



# [D] What will be the output of the following programs:

(a) #include<stdio.h>
    int main ()
    {
        int i = 2, j = 3,k,l;
        float a,b;

        k=i/j*j;
        l=j/i*i;
        a=i/j*j;
        b=j/i*i;

        printf("%d %d %f %f\n",k,l,a,b);
        return 0;
    }
 OUTPUT: 0 2 0.0000 2.0000

(b) #include<stdio.h>
    int main ()
    {
        int a,b,c,d;
        a = 2%5;
        b = -2%5;
        c = 2%-5;
        d = -2%-5;

        printf("a= %d b= %d c= %d d= %d\n",a,b,c,d);
        return 0;
    }
 OUTPUT : 2 -2 2 -2 

(c)  #include<stdio.h>
    int main ()
    {
        float a=5, b=2;
        int c,d;
        c = a%b;
        d = a/2;

        printf("%d\n",d);
        return 0;
    }
 OUTPUT : ERROR because modulus operator did not work with float

(d)  #include<stdio.h>
    int main ()
    {
        printf("nn\n\nnn\n");
        printf("nn/n/n nn/n");
        return 0;
    }
 OUTPUT: nn


          nn

          nn/n/n nn/n


(e)   #include<stdio.h>
    int main ()
    {
        int a,b;
        printf("Enter values of a and b");
        scanf(" %d%d ",&a,&b);
        printf("a=%d b=%d",a,b);
        return 0;
    }
OUTPUT: no output because space is in scanf after " 


# [E] State whether the following statements are True or False:

(a) * or /, + or – represents the correct hierarchy of arithmetic
operators in C.

Answer: True

(b) [ ] and { } can be used in Arithmetic instructions.

Answer: False

(c) Hierarchy decides which operator is used first.

Answer: True

(d) In C, Arithmetic instruction cannot contain constants on left
side of =

Answer: True

(e) In C ** operator is used for exponentiation operation.

Answer: False

(f) % operator cannot be used on floats.

Answer: True


# [F] Fill in the blanks:

(a) In y = 10 * x / 2 + z ; 10 * x operation will be performed first.

(b) If a is an integer variable, a = 11 / 2 ; will store 5 in a.

(c) The expression, a = 22 / 7 * 5 / 3 ; would evaluate to 5.

(d) The expression x = -7 % 2 – 8 would evaluate to -9.

(e) If d is a float the operation d = 2 / 7.0 would store 0.285714
in d.


# [G] Attempt the following:

(a) If a five-digit number is input through the keyboard, write a
    program to calculate the sum of its digits. (Hint: Use the
    modulus operator ‘%’)

SOLUTION:

    #include<stdio.h>

    int main()
    {
        int num,m1,m2,m3,m4,d1,d2,d3,d4,ans;
        printf("Please Enter Five Digit Number: ");
        scanf("%d",&num);
        m1=num%10;
        d1=num/10;
        m2=d1%10;
        d2=d1/10;
        m3=d2%10;
        d3=d2/10;
        m4=d3%10;
        d4=d3/10;
        ans = m1+m2+m3+m4+d4;
        printf("Answer= %d\n",ans);
        return 0;
    }


    