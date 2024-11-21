#include <stdio.h>

   int main() {
   	
   	float radius ;
   	float circumference ;
	float area ;
	float PI = 3.14 ;
	 
	printf("Hay nhap ban kinh hinh tron: ") ;
	scanf("%f", &radius) ;
	circumference = radius * PI * 2 ;
    area = radius * radius * PI ;
    printf("Chu vi hinh tron la: %.2f\n",circumference) ;
    printf("Dien tich hinh tron la: %.2f\n",area) ;
    
    return 0 ; 

	 
   }
    
