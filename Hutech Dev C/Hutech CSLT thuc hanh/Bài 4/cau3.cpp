#include <stdio.h>
#include <string.h>
int main(){
	int a,b,x;
	printf("nhap a: "); scanf("%d",&a);
	printf("nhap b: "); scanf("%d",&b);
	printf("\nnhap ki tu + de %d+%d",a,b);
	printf("\nnhap ki tu - de %d-%d",a,b);
	printf("\nnhap ki tu * de %d*%d",a,b);
	printf("\nnhap ki tu / de %d/%d",a,b);
	char kt[3];
	fflush(stdin);
	printf("\nmoi nhap ki tu: ");
	gets(kt);
	if(stricmp(kt,"+")==0)  x=1;
	if(stricmp(kt,"-")==0)  x=2;
	if(stricmp(kt,"*")==0)  x=3;
	if(stricmp(kt,"\\")==0)  x=4;
	switch (x){
		case 1: printf("\nkq %d+%d la: %d",a,b,a+b); break;
		case 2:printf("\nkq %d-%d la: %d",a,b,a-b); break;
		case 3:printf("\nkq %d*%d la: %d",a,b,a*b); break;
		case 4:printf("\nkq %d/%d la: %.2f",a,b,(float)a/b); break;
		default: printf("\nsai ki tu");break;
	}
}

