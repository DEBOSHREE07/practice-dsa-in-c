#include<stdio.h>
int main () 
{
    int r ;
    float v ;
    printf("Enter any No. : ");
    /*user defined function*/
    scanf("%d",&r);         

    /*formula of a sphere*/
    v  = 4 * 3.14 * r * r * r / 3 ;


    printf("\n %f ",v);


    return 0;



}