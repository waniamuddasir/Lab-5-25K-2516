#include <stdio.h>
int  main (){
	int side1, side2, side3;
	printf("Enter the length of Side 1:\n");
	scanf("%i", &side1);
	printf("Enter the length of Side 2:\n");
	scanf("%i", &side2);
	printf("Enter the length of Side 3:\n");
	scanf("%i", &side3);
	
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){
		if (side1 == side2 && side2 == side3){
			printf("The Triangle is an Equilateral Traingle\n");
		} else if (side1 == side2 && side1 != side3 || side2 == side3 && side2 != side1 || side3 == side1 && side3 != side2){
			printf("The Triangle is an Isosceles Triangle\n");
		} else if (side1 != side2 && side2 != side3){
			printf("The Triangle is an Scalene Triangle\n");
		}
	} else {
		printf("This is not a Triangle\n");
	}
	return 0;
}