#include <stdio.h> 
  int main() {
  	float side, height ;
  	float area ;
	   
	printf("Nhap do dai canh cua tam giac: ") ;
	scanf("%f", &side) ;
	
	printf("Nhap chieu cao cua tam giac: ") ;
	scanf("%f", &height) ;
	
	area = 0.5 * side * height ;
	printf("Dien tich cua tam giac la %.2f\n",area) ;
	
	return 0 ;
	 
  }
