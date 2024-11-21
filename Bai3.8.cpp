#include <stdio.h>
  int main() {
  	int number;
    int a, b, c, d ;
	 
	printf("Hay nhap so nguyen bat ki co 4 chu so: ") ;
	scanf("%d", &number) ;
	
	a = number / 1000 ;
	b = number / 100 % 10 ;
	c = number / 10 % 10 ;
	d = number % 10 ;
	
	printf("So nghich dao cua so da nhap la: %d%d%d%d",d,c,b,a) ;
	
	
	return 0 ; 
	
  }
