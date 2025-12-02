#include<stdio.h>

int main(){
	float p1,p2,p3;
	float price1 = 0;
	scanf("%f",&p1);
	price1 = p1 - (p1 * 0.05);
	printf("%.2f\n",price1);
	
	float price2 = 0;
	scanf("%f",&p2);
	price2 = (p1 + p2) - ((p1 + p2) * 0.15);
	printf("%.2f\n",price2);
	
	float price3 = 0;
	scanf("%f",&p3);
	price3 = (p1 + p2 + p3) - ((p1 + p2 + p3) * 0.3);
	printf("%.2f\n",price3);
	
}
