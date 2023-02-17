#include <stdio.h>
#include <math.h>
int main ( )
{

		//Triangle's perimeter and area(Heron's formula) 
		int side1;
		int side2;
		int side3;
		printf("Enter the length of the triangle's first side: ");
		scanf("%d", &side1);
		printf("\n");
		printf("Enter the length of the triangle's second side: ");
		scanf("%d", &side2);
		printf("\n");
		printf("Enter the length of the triangle's third side: ");
		scanf("%d", &side3);
		
		int perimeter = side1 + side2 + side3;
		double halfperimeter = perimeter / 2;
		double halfperimetera = halfperimeter - side1;
		double halfperimeterb = halfperimeter - side2;
		double halfperimeterc = halfperimeter - side3;
		double halfperimetermulti = halfperimetera * halfperimeterb * halfperimeterc;
		double halfperimetermulti2 = (halfperimeter * halfperimetermulti);
		double area = sqrt(halfperimetermulti2);
		printf("\n");
		printf("The triangle's perimeter is: %d cm\n", perimeter);
		printf("The triangle's area is: %lf cm^2\n", area);
		
		return 0;
}
