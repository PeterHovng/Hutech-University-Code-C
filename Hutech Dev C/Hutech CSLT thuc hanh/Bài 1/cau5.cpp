//Cách 1
#include <stdio.h>
#include <math.h>
int main(){
	//Nhập vào 2 số nguyên xem số nào lớn nhất
	int a,b;
	printf("Nhap vao 2 so nguyen: ", &a, &b);
	scanf("%d %d", &a, &b);
	if(a>b){
		int max = a;
		printf("Gia tri lon nhat la: %d", max);
	}
	else{
		int max = b;
		printf("Gia tri lon nhat la: %d", max);
	}
	// Nhập vào 3 số nguyên xem số nào lớn nhất
	int x,y,z;
	printf("\nNhap vao 3 so nguyen: ", &x, &y, &z);
	scanf("%d %d %d", &x, &y, &z);
	if(x>y && x>z){
		int max = x;
		printf("Gia tri lon nhat la: %d", max);
	}
	else if(y>x && y>z){
		int max = y;
		printf("Gia tri lon nhat la: %d", max);
	}
	else{
		int max = z;
		printf("Gia tri lon nhat la: %d", max);
	}
	return 0;
}
//Cách 2
/*
#include <stdio.h>
#include <math.h>

int main(){
	int max,a,b,c,d,e,f;
	printf("Nhap vao hai so nguyen: ");
	scanf("%d%d",&a,&b);
	max=a>b?a:b;
	printf("max: %d \n",max);
	printf("Nhap vao ba so nguyen: ");
	scanf("%d%d%d",&c,&d,&e);
	f=c>d?c:d;
	f=f>e?f:e;
	printf("max: %d ",f);
	return 0;
}
*/