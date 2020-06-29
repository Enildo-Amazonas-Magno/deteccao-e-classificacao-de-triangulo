#include <stdio.h>
int main()
{
    float side1, side2, side3;
    scanf("%f\n%f\n%f", &side1, &side2, &side3);
    if(side1+side2<=side3 || side1+side3<=side2 || side3+side2<=side1)printf("-");
    else
    {
        if(side1!=side2 && side1!=side3 && side3!=side2)printf("ESCALENO");
        
        if(side1==side2 && side1==side3 && side3==side2)printf("EQUILATERO");
        if(side1==side2 && side1!=side3)printf("ISOSCELES");
        if(side1==side3 && side3!=side2)printf("ISOSCELES");
        if(side1!=side3 && side3==side2)printf("ISOSCELES");
    }
    return 0; 
}