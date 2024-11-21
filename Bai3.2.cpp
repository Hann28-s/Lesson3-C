#include <stdio.h>
 
 int main() {
 	
 	float celsius, fahrenheit ;
 	printf("Hay nhap nhiet do Celsius: ") ;
 	scanf("%.2f",celsius) ;
 	fahrenheit = 9/5 * celsius + 32 ;
 	printf("\n") ;
	printf("Nhiet do chuyen sang  Fahrenheit la: %.2f \n", fahrenheit);
	
	return 0 ; 
 	
 }
