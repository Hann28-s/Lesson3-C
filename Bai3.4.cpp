#include <stdio.h>
   int main() {
   	
   	float a, b, c ;
	float sum, average ;
	
	printf("Nhap diem Toan: ") ;
	scanf("%f", &a) ;
	
	printf("Nhap diem Van: ") ;
	scanf("%f", &b) ;
	
	printf("Nhap diem Anh: ") ;
	scanf("%f", &c) ;
	
	sum = a + b + c ;
	average = sum / 3 ;
	
	printf("Tong diem la: %.2f\n",sum) ;
	printf("Diem trung binh la: %.2f\n",average) ;
	
	return 0;
	 
   }
