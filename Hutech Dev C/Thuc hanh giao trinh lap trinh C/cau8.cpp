//Chương trình: Máy bán nước tự động.
#include <stdio.h>
#include <math.h>
void menu(){
	printf("Danh sach cong viec: \n");
	printf("1: Cong viec 1\n");
	printf("2: Cong viec 2\n");
	printf("3: Cong viec 3\n");
}
void cv1(){
	int n;
	do{
		printf("nhap so tien: ");
		scanf("%d",&n);
	}while (n<6000||n%2000!=0);
	int x;
	printf("nhap lua chon 1-6\n");
	scanf("%d",&x);
	int sl=0;
	switch (x){
	case 1:{
		while(n>14000){
			n=n-14000;
			sl++;
		}
		printf("Tra xanh-%d chai-Tien du %d",sl,n);
		break;
	}
	case 2:{
		while(n>12000){
			n=n-12000;
			sl++;
		}
		printf("Sting-%d chai-Tien du %d",sl,n);
		break;
	}case 3:{
		while(n>10000){
			n=n-10000;
			sl++;
		}
		printf("Pepsi-%d chai-Tien du %d",sl,n);
		break;
	
	}
	case 4:{
		while(n>16000){
			n=n-16000;
			sl++;
		}
		printf("Warrio-%d chai-Tien du %d",sl,n);
		break;
	}
	case 6:{
		while(n>6000){
			n=n-6000;
			sl++;
		}
		printf("Nuoc suoi-%d chai-Tien du %d",sl,n);
		break;
	}
	case 7:{
		while(n>8000){
			n=n-8000;
			sl++;
		}
		printf("Sua tuoi-%d hop-Tien du %d",sl,n);
		break;
	}
	defaul : break; 
}
}
void cv2(){
	unsigned int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if (n<0) printf("nhap lai\n");
	}while(n<0);
	float tong=0;
	for (int i=1;i<=n;i++)
		tong=tong+(i+1)/pow(i,1.0/3);
	printf("Tong can tinh la: %.3f",tong);
}
void cv3(){
	int a,b,a1,b1;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	a1=a;
	b1=b;
    if(a==0||b==0){
        printf("UCLN la: %d", a+b);
    }
    while(a!=b)
    {
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    printf("UCLN la: %d\n",a);
    int tuoca=0,tuocb=0;
    for (int i=1;i<a1;i++)
    	if (a1%i==0) tuoca=tuoca+i;
    for (int i=1;i<b1;i++)
    	if (b1%i==0) tuocb=tuocb+i;
	if (a1==tuocb && b1==tuoca) printf("%d va %d la cap so ban (Amicable numbers)",a1,b1);
}
int main(){
	menu();
	int x;
	do{
		printf("nhap cong viec 1-3: ");
		scanf("%d",&x);
		if (x<=0||x>3) printf("nhap lai\n");
	}while (x<=0||x>3);
	switch (x){
	case 1:{
		cv1();
		break;
	}
	case 2:{
		cv2();
		break;
	}
	case 3:{
		cv3();
		break;
	}
	}
}