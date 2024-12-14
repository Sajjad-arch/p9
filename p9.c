
#include <stdio.h>

int main (void)

{


    int i;
    float f,sum ;

    printf("Enter a integer number: ");
    scanf("%d", &i);


     printf("Enter a floating point number: ");
     scanf("%f", &f);


     sum=i+f;

    printf("The sum of %d and %.4f is %.4f:\n", i,f,sum);









    return 0;
}
