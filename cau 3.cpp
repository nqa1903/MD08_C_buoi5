#include <stdio.h>

int main(){
	int subscription_fee = 25000;
	int min , actual_fee;
	printf("Nhap vao so phut goi dien :");
	scanf("%d", &min);
	
	if(min <= 50){
		actual_fee = 600 + subscription_fee;
	}else if(50 < min && min <= 150){
		actual_fee = 400 + subscription_fee;
	}else if(150< min && min <= 200){
		actual_fee = 200 + subscription_fee;
	}else{
		actual_fee = 100 + subscription_fee;
	}
	printf("Tien cuoc dien thoai la : %d", actual_fee);
}
