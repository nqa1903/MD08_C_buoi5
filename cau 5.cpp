#include <stdio.h>

int main(){
	int month , day ;
	printf("nhap thang sinh va ngay sinh :");
	scanf("%d %d", &month , &day);
	
	switch(month){
		case 1:
			if(day >= 20){
				printf("Cung bao binh \n");
			}else{
				printf("Cung ma ket \n");
			}
			break;
		case 2:
			if(day >= 19){
				printf("Cung song ngu \n");
			}else{
				printf("Cung bao binh \n");
			}
			break;
		case 3:
			if(day >= 21){
				printf("Cung bach duong \n");
			}else{
				printf("Cung song ngu \n");
			}
			break;
		case 4:
			if(day >= 21){
				printf("Cung kim nguu \n");
			}else{
				printf("Cung bach duong \n");
			}
			break;
		case 5:
			if(day >= 21){
				printf("Cung song tu \n");
			}else{
				printf("cung kim ngu \n");
			}
			break;
		case 6:
			if(day >= 22){
				printf("Cung cu giai \n");
			}else{
				printf("Cung song tu \n");
			}
			break;
		case 7:
			if(day >= 23){
				printf("Cung su tu \n");
			}else{
				printf("Cung cu giai \n");
			}
			break;
		case 8:
			if(day >= 23){
				printf("Cung xu nu \n");
			}else{
				printf("Cung su tu \n");
			}
			break;
		case 9: 
			if(day >= 23){
				printf("Cung thien binh \n");
			}else{
				printf("Cung xu nu \n");
			}
			break;
		case 10:
			if(day >= 24){
				printf("Cung bo cap \n");
			}else{
				printf("Cung thien binh \n");
			}
			break;
		case 11:
			if(day >= 23){
				printf("Cung nhan ma \n");
			}else{
				printf("Cung bo cap \n");
			}
			break;
		case 12:
			if(day >= 22){
				printf("Cung ma ket \n");
			}else{
				printf("Cung nhan ma \n");
			}
			break;
		default:
			printf("thang khong hop le");
	}
}
