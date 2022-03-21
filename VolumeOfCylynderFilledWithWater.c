#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double radius,heightOfFill,volumeOfFill;

    printf("Enter radius: ");
    scanf("%lf",&radius);
    printf("Enter height of fill: ");
    scanf("%lf",&heightOfFill);

    if (radius > 0 && heightOfFill > 0)
    {
        volumeOfFill = M_PI*pow(radius,2)*heightOfFill;
        printf("The volume is: %.2lf \n",volumeOfFill);
    }else{
        if (heightOfFill == 0 && radius != 0){
      printf("The cilinder is empty!");
    }else{
         printf("Enter valid input! \n");
      
         return EXIT_FAILURE;
    }
    }
    
    
    return EXIT_SUCCESS;
}