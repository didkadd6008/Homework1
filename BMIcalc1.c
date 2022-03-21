#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main( ){
   
    double height;
    double weight;
    double bmi;
    

    printf("Please enter weight: ");
    scanf("%lf",&weight);
    printf("Please enter height : ");
    scanf("%lf",&height);
    
     
    if(round(height) == height){
        height /= 100;
    }

   if ((height > 0 && height <= 3.0 )&& (weight > 0 && weight <= 1000)){
  
     bmi = weight / pow(height,2);
    printf("BMI: %.1lf \n",bmi);

    bmi = 1.3 * (weight / pow(height,2.5));
    printf("OXBMI: %.1lf \n",bmi);

   }else{
       printf("Enter valid input!\n");
       return EXIT_FAILURE;
   }
   
   
   
   return EXIT_SUCCESS;
}