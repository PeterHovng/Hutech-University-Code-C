#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//1.Xet chan le
void Xetchanle(int n) { //Khoi tao bien n la so
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n%2==0) printf("%d la so chan",n);
	else printf("%d la so le",n);
}
//2.Xet co tao thanh tam giac khong
void Xettamgiac(int a, int b, int c) { //Khoi tao 3 canh tam giac
	//In put:
	printf("Chuong trinh tinh 3 canh cua mot tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	//Xu ly:
	if(a+b>c && a+c>b && b+c>a) printf("Tao thanh mot tam giac");
	else printf("Khong phai la tam giac");
}
//3.Nhap diem mon CSLT
void NhapdiemmonCSLT(int n) { //Khoi tao bien n la diem cua mon
	printf("Nhap diem mon CSLT: ");
	scanf("%d",&n);
	if(n<5) printf("Loai kem");
	if(5<=n && n<7) printf("Loai trung binh");
	if(7<=n && n<8) printf("Loai kha");
	if(8<=n && n<=10) printf("Loai gioi");
}
//4.Nhap so va in ra chu so
void Docso(int n) {
	printf("Nhap so tu 1-9: ");
	scanf("%d",&n);
	if(0<=n && n<=9) {
		switch(n) {
			case 0:
				printf("Khong");
				break;
			case 1:
				printf("Mot");
				break;
			case 2:
				printf("Khong");
				break;
			case 3:
				printf("Ba");
				break;
			case 4:
				printf("Bon");
				break;
			case 5:
				printf("Nam");
				break;
			case 6:
				printf("Sau");
				break;
			case 7:
				printf("Bay");
				break;
			case 8:
				printf("Tam");
				break;
			case 9:
				printf("Chin");
				break;
		}
	} else {
		printf("Nhap sai moi nhap lai");
	}
}
//5.Tinh tong den N
void TinhtongdenN(int n,int sum,int i) { //Khoi tao bien sum de tinh tong
	printf("Nhap N: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		sum=1;
		sum=sum+i;
	}
	printf("1+2+...+%d=%d\n",n,sum);

}
//6.Tinh tong den N sum=1-2+3-4...(+/-)N
void TinhtongdenNdang2(int n,int sum,int i) {  //sum van la tong
	printf("Nhap N: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		//Day la cong thuc can phai nho: Neu theo dang 1-2+3-4....(+/-)N=? thi phai lam theo dang nay va nguoc lai OK
		sum=0;
		if(i%2==0) sum= sum-i;
		else sum=sum+i;
		printf("1-2+...(+/-)%d=%d\n",n,sum);
	}
}
//7.Tinh tong den N sum=1/1+1/2+1/3...+1/N
void TinhtongdenNdang3(int n,float sum,int i) {  //sum van la tong
	printf("Nhap N: ");
	scanf("%d",&n);
	sum=0;
	for(i=1; i<=n; i++) {
		sum=sum + 1/i;
		printf("\n1/1+1/2+1/3...+1/%d=%.2f\n",n,sum);
	}
}
//8.Nhap so nguyen duong N tinh N!
void Tinhgiaithua(int n,int sum,int i) {  //Khoi tao bien sum=1 gan gia tri
	printf("Nhap N: ");
	scanf("%d",&n);
	sum=1;
	for(i=1; i<=n; i++) {
		sum = sum * i;
	}
	printf("%d! co gia tri =%d",n,sum);
}
//9.Menu 

int main() {
	int n;
	int a,b,c;
	int choice=1;
	int sum;
	int i;
	do {
		system ("cls");
		//In put
		printf("Queo lua queo lua di ba con oi");
		printf("\n0.Thoat");
		printf("\n1.Xet so chan le");
		printf("\n2.Xet 3 canh co phai la tam giac hay khong");
		printf("\n3.Xet loai hoc luc bang diem");
		printf("\n4.Doc so 1-9");
		printf("\n5.Tinh tong tu 1-N (Error)");
		printf("\n6.Tinh tong tu 1-2+3-4...(+/-)N (Error)");
		printf("\n7.Tinh tong den N sum=1/1+1/2+1/3...+1/N (Error)");
		printf("\n8.Tinh giai thua N");

		printf("\n");
		printf("Hay chon mot so: ");
		scanf("%d",&choice);
		//Tao cac option va xuat out put
		switch(choice) {
			case 1:
				Xetchanle(n);
				break;
			case 2:
				Xettamgiac(a,b,c);
				break;
			case 3:
				NhapdiemmonCSLT(n);
				break;
			case 4:
				Docso(n);
				break;
			case 5:
				TinhtongdenN(n,sum,i);
				break;
			case 6:
				TinhtongdenNdang2(n,sum,i);
				break;
			case 7:
				TinhtongdenNdang3(n,sum,i);
				break;
			case 8:
				Tinhgiaithua(n,sum,i);
				return 0;
				break;
		}

		printf("\nBan muon thuc hien tiep hay khong (1:co|0:khong):");
		scanf("%d",&choice);
	} while(1<=choice && choice <=10);
	return 0;
}
