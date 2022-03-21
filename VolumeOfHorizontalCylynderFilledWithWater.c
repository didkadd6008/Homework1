#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double area1 (double radius,double height){
    double r,h,cosinus,area,squareRoot;
    r = radius;
    h = height;
   cosinus = acos((r - h) / r);
    squareRoot = sqrt((2 * r * h) - pow(h,2));
    area = (cosinus * pow(r,2)) - ((r -h) * squareRoot);

    return area;
};

int main(){
    double radius,heightOfCylynder,heightOfFill,volumeOfFill,area;

    printf("Enter radius: ");
    scanf("%lf",&radius);
    printf("Enter height: ");
    scanf("%lf",&heightOfCylynder);
    printf("Enter height of Fill: ");
    scanf("%lf",&heightOfFill);

    if (radius > 0 && heightOfCylynder > 0 && heightOfFill> 0 && heightOfFill <= heightOfCylynder) 
    {
        area = area1(radius,heightOfFill);
        volumeOfFill = area * heightOfCylynder;
        printf("%.2lf\n",volumeOfFill);

    }else{
        if (heightOfFill == 0 && heightOfCylynder > 0 && radius > 0)
        {
            printf("Empty cylynder! \n");
        }else{
            printf("Invalit input! \n");
            return EXIT_FAILURE;
        }
        
    }
    return EXIT_SUCCESS;
}