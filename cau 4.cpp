#include <stdio.h>

int main(){
	float salary, tax, actual_salary;
	printf("nhap luong cua nhan vien :");
	scanf("%f", &salary);
	
	if(salary <= 5){
		tax = salary * 0.05;
		actual_salary = salary - tax;
	}else if(5 < salary && salary <=10){
		tax = salary * 0.1;
		actual_salary = salary - tax;
	}else if(10 < salary && salary <= 18){
		tax = salary * 0.15;
		actual_salary = salary - tax;
	}else if(18 < salary && salary <= 32){
		tax = salary * 0.2;
		actual_salary = salary - tax;
	}else if(32 < salary && salary <= 52){
		tax = salary * 0.25;
		actual_salary = salary - tax;
	}else if(52 < salary && salary <= 80){
		tax = salary * 0.3;
		actual_salary = salary - tax;
	}else{
		tax = salary * 0.35;
		actual_salary = salary - tax;
	}
	
	printf("tien thue la %.2f trieu \n", tax);
	printf("tien luong thuc la %.2f trieu" , actual_salary);
}
