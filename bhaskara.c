#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {

	double R1, R2, delta, a, b, c;
	
	scanf("%lf %lf %lf", &a, &b, &c);

	delta = (b*b) -(4*a*c);
	

	R1 = (-b + sqrt(delta))/(2*a); 
	
	R2 = (-b - sqrt(delta))/(2*a);
		
	
	
	if (a != 0 && delta > 0){
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);


	} else {
		
		printf("Impossivel calcular\n");

}

return 0;
}

