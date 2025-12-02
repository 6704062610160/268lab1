#include<stdio.h>

int main(){
	float a,b,c,d,e,f;
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	
	float s1 = (a/100)*30;
	float s2 = (b/120)*35;
	float s3 = (c/60)*12;
	float s4 = (d/60)*13;
	float s5 = (e/16)*5;
	float s6 = (f/16)*5;
	printf("%10s%10.0f => %5.2f\n","Mid=",a,s1);
	printf("%10s%10.0f => %5.2f\n","Final=",b,s2);
	printf("%10s%10.0f => %5.2f\n","Q1=",c,s3);
	printf("%10s%10.0f => %5.2f\n","Q2=",d,s4);
	printf("%10s%10.0f => %5.2f\n","lab=",e,s5);
	printf("%10s%10.0f => %5.2f\n","sit=",f,s6);
	
	float sum = s1 + s2 + s3 + s4 + s5 + s6;
	printf("*****%.2f******\n",sum);
}
