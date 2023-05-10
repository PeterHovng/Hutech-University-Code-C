#include<stdio.h>
#define MAX 100
#include<math.h>
void nhapso(int &n){
	do{
		printf("nhap phan tu tu 0 den 100: ");
		scanf("%d",&n);
		if(n<=0||n>=100){
			printf("nhap lai\n");
		}
	}while(n<=0||n>=100);
}
void nhapmang (int a[],int n){
	for (int i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n){
	printf("\n mang gom cac  phan tu:");
	for (int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}
void chiahetcho3(int a[],int n){
	for (int i=0;i<n;i++){
		if(a[i]%3==0){
			printf("%d\t", a[i]);
		}//else printf("khong chia het cho 3");
	}
}
int demsoluongsoduong(int a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			dem++;
		}
	}return dem;
}
int tinhtong(int a[],int n){
	int sum=0;
	for(int i=0;i<=n;i++){
			sum=sum+a[i];
	}return sum;
}
float trungbinhcong(int a[],int n){
	int sum=0;
	for(int i=0;i<=n;i++){
			sum=sum+a[i];
	}return (float )sum/n;
}
float trungbinhcongsoduongtrongmang(int a[],int n){
	int sum=0;
	int dem=0;
	for(int i=0;i<=n;i++){
		if(a[i]>0){
			sum=sum+a[i];
			dem++;
		}
	}return (float)sum/dem;
}
int songuyento(int n){
	if(n<2)
	return 0;
	int cb2=sqrt(n);
	for(int i=2;i<=cb2;i++){
		if(n%i==0)
			return 0; 
	} return 1;
}
void songuyentotrongmang(int a[],int n){
	int dem=0,tong=0;
	for (int i=0;i<n;i++){
		if(songuyento(a[i])==1){
			printf("%d\t",a[i]);
			dem++;
			tong=tong+a[i];
		}
	}
	printf("\nso luong nguyen to trong mang la:%d\n",dem);
	printf("\ntong so nguyen to trong mang: %d\n",tong);
	printf("\ntrung binh cong so nguyen to trong mang: %f\n",(float)tong/dem);
}
int soduongdautien(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]>0){
			return a[i];
		}
	}
}
int soduongcuoicung(int a[],int n){
   for (int i=n-1; i>=0; i--){
        if (a[i]>0)
          return a[i];
	}
}
void timlonnhatVanhonhat(int a[],int n){
	int lon1st=a[0];
	int nho1st=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>lon1st){
			lon1st=a[i];
		}
		if(a[i]<nho1st){
			nho1st=a[i];
		}
	} printf("\nPhan tu lon nhat trong mang la: %d\n",lon1st);
      printf("\nPhan tu nho nhat trong mang la: %d\n",nho1st);
}
int main(){
	int a[MAX],n;
	nhapso(n);
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\nso chia het cho 3 la:");
    chiahetcho3(a,n);
	printf("\nso luong so duong co trong mang la:%d\n",demsoluongsoduong(a,n));
	printf("\ntong cac so trong mang la: %d\n",tinhtong(a,n));
	printf("trung binh cong: %.2f\n",trungbinhcong(a,n));
	printf("\ntrung binh cong cac phan tu duong trong mang: %.2f\n",trungbinhcongsoduongtrongmang(a,n));
	printf("\nso nguyen to trong mang la: ");
	songuyentotrongmang(a,n);
	printf("\nso duong dau tien:%d\n",soduongdautien(a,n));
	printf("\nso duong cuoi cung:%d",soduongcuoicung(a,n));
	timlonnhatVanhonhat(a,n);
	
	
}
