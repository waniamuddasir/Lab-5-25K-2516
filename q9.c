#include <stdio.h>
int main (){
	int a, b, c, discriminant;
	printf("Enter the values of a, b, c:\n");
	scanf("%i %i %i", &a, &b, &c);
	
	discriminant = ((b*b) - (4 * a * c));
	if (discriminant > 0){
		printf("Two Real Roots\n");
	} else if (discriminant == 0){
		printf("One Real Root\n");
	} else if (discriminant < 0){
		printf("Imaginary Roots\n");
	}
	return 0;
}