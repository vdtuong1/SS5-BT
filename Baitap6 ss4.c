#include<stdio.h>
int main(){
	int number1,number2,number3,number4;
	printf("nhap so thu nhat: ");
	scanf("%d", &number1);
	printf("nhap so thu hai: ");
	scanf("%d", &number2);
	printf("nhap so thu ba: ");
	scanf("%d", &number3);
	printf("nhap so thu tu: ");
	scanf("%d",&number4);
	if ( number1 > number2 && number2 > number3 ){
			printf("so lon nhat la: %d",number1);
			printf("\nso nho nhat la: %d",number2);
			printf("\nso con lai la: %d",number3);
	}else if (number1 > number2 && number2 < number3) {
		if (number1 < number3){
			printf("so lon nhat la: %d",number3);
			printf("\nso nho nhat la: %d",number2);
			printf("\nso con lai la: %d",number1);
		}else{
			printf("so lon nhat la: %d",number1);
			printf("\nso nho nhat la: %d",number2);
			printf("\nso con lai la: %d",number3);
		}
	}
	if (number2 > number1 && number1 > number3){
			printf("nso lon nhat la: %d",number2);
			printf("\nso nho nhat la: %d",number1);
			printf("\nso con lai la: %d",number3);
	}else if (number2 > number1 && number1 < number3){
		if (number2 > number3){
			printf("so lon nhat la: %d",number2);
			printf("\nso nho nhat la: %d",number1);
			printf("\nso con lai la: %d",number3);
		}if (number2 < number3){
			printf("so lon nhat la: %d",number3);
			printf("\nso nho nhat la: %d",number1);
			printf("\nso con lai la: %d",number2);
		}
		}
	if (number3 > number1 && number1 > number2){
		printf("so lon nhat la: %d",number3);
		printf("\nso nho nhat la: %d",number2);
		printf("\nso con lai la: %d",number1);
		}else if ( number3 > number1 && number1 < number2){
			if (number3 > number2){
				printf("\nso lon nhat la: %d",number3);
			    printf("\nso nho nhat la: %d",number1);
			    printf("\nso con lai la: %d",number2);
		    }else if (number3 < number2){
		    	printf("so lon nhat la: %d",number2);
			    printf("\nso nho nhat la: %d",number1);
			    printf("\nso con lai la: %d",number3);
			}
			}
		}
	

	
