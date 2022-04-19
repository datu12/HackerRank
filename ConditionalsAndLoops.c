#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char *arr[] ={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
      // Complete the code.
    
    //initiate loop
    for(int i = a; i <= b; i++) //Use a as int I & b to measure the loop
        {
            if(i<=9)
            {
                    printf("%s\n", arr[i-1]);    //use arr[i-1] as to print the modified string because remember in order
              //cont: to get the end of array you need to -1 as array starts at 0 bit.
            }
            else{
                    i%2==0?printf("even\n"):printf("odd\n"); //Run a special string req to print both A & B: 
            }
        }
    
    return 0;
}
