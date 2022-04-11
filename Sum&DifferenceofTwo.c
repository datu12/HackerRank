#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//Fundamental data int, float, char
    //format string for prinf %d (integer), %s (string) %f (float)
    //format string for scanf %d, &int, %s, &string, %f &float
    
    //Task *take two numbers of int data type, 
    //Task *take two numbers of float as input
    //Output their sum
    
    //Declare two type of int
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    
    
    //Declare two type of float
    float c, d;
    scanf("%f",&c);
    scanf("%f",&d);
    
    //print the sum and difference of both inegers
    //(a+b) + (a-b)
    int sum = (a+b);
    int diff = (a-b);
    
    //(c+d) + (c-d)
    float sUm = (c+d);
    float difF = (c-d);
    
    printf("%d %d\n", sum, diff);
    printf("%.1f %.1f", sUm, difF);
    

    //print
    
    
    return 0;
}
