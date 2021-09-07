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
# OUTPUT: 0 2 0.0000 2.0000

(b)  #include<stdio.h>
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

# OUTPUT : 2 -2 2 -2 