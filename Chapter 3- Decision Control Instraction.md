# [F]
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
