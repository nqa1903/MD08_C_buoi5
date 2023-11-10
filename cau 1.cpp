#include <stdio.h>
#include <math.h>

int main(){
	int a , b , c;
	float x1 , x2;
	printf("nhap a b c :");
	scanf("%d %d %d",&a ,&b ,&c);
	float dental = b*b - 4*a*c;
	if(a == 0 && b == 0 & c == 0){
		printf("phuong trinh vo so nghiem");
	}else if(a == 0 && b != 0){
		printf("niem phuong trinh la %.2f" , (float)-c/b);
	}else if(a != 0 ){
		if(dental < 0){
			printf("phuong trinh vo nghiem");
		}else if(dental ==0){
			x1 = -b/(2*a);
			printf("niem phuong trinh : %.2f", x1);
		}else{
			x1 = (-b + sqrt(dental)) / (2*a);
			x2 = (-b - sqrt(dental)) / (2*a);
			printf("niem cua phuong trinh la %.2f va %.2f",x1,x2);
		}
	}
}
