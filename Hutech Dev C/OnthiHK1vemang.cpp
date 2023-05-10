//Tổng hợp các bài về mảng
//Cho mảng 1 chiều các số nguyên n>0 và n<100
//1.Viết hàm nhập mảng 
#include <stdio.h> 
void NhapN(int &n)
{
	do{
		printf("nhap n: ");
		scanf("%d",&n);
		if(n<0 || n>100)
		  printf("n khong hop le, xin vui long nhap lai");
	}while(n<0 || n>100);
}
void NhapMang(int a[],int n)
{
	for(int i=1;i<n+1;i++)
	{
		printf("Nhap so phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
}
//2.Viết hàm xuất các phần tử âm của mảng
void XuatMangAm(int a[],int n)
{
	printf("Cac phan tu am cua mang la: ");
	for(int i=1;i<n+1;i++)
	{
		if(a[i]<0)
		{
		 printf("%d\t",a[i]);
		}
	}
}
/*3.Nhập vào x,kiểm tra x có trong mảng hay ko, nếu có trả về vị trí xuất hiện trong mảng,
nếu không trả về bằng -1*/
int KiemTra(int a[],int x){
	int i,n;
	printf("Nhap x: "); scanf("%d",&x);
	for(int i=0;i<n;i++){
	if(a[i]==x)
	 return i;
	return -1;
	}
}
//4.Đếm số lượng các phần tử chia hết cho 3 trong mảng
int DemSoPhanTu (int a[],int n){ 
    int dem=0;
	for(int i=1;i<n+1;i++)
	{
		if(a[i]%3!=0) continue;
		else dem++;
	}
	printf("\nTong so luong cac phan tu chia het cho 3 la: %d",dem);
	return dem;
}
//5.Tính trung bình các phần tử chẵn trong mảng         //khong nhap so chan bai khong chay
int TrungBinhChan(int a[], int n)
{
	int tbc,congsochan=0;
	int dem=0;
	for( int i=1 ; i<n+1 ; i++ )
		if(a[i]%2==0)
		{
			congsochan=congsochan+a[i];
			dem++;
		}
	tbc=congsochan/dem;
	printf("\nTong trung binh cac phan tu chan trong mang la: %d",tbc);
	return tbc;
}
//6.Xóa phần tử tại vị trí x trong mảng
int XoaPhanTu(int a[],int n,int vt)
{
	printf("\nNhap vao vi tri xoa: "); scanf("%d",&vt);
	for(int i=vt;i<n+1;i++)
	 a[i]=a[i+1];
	n--;
	printf("Mang sau khi xoa la: ");
	return vt;
}
void XuatMangXoa(int a[],int n){
	for(int i=1;i<n;i++)
	 printf("%d\t",a[i]);
}
//7.Tìm vị trí có phần tử nhỏ nhất trong mảng
int TimVTMin(int a[],int n)
{
	int vtmin=0;
	for(int i=1;i<n+1;i++)
	{
		if(a[vtmin]>a[i])
		    vtmin=i;
	}
	printf("\nVi tri co phan tu nho nhat trong mang la: %d",vtmin);
	return vtmin;
}
//8.Kiểm tra mảng có âm dương xen kẽ hay không vd: 2 -2 4 -6 8 -9
int KtAmDuong(int a[],int n)
{
for ( int i=1 ; i<n ;i++)
{
    for ( int j=i+1 ;j<n+1 ; j++){
     	if( a[i] * a[j] < 0){
	      printf("\nMang co am duong xen ke");
	    }else printf("\nMang khong co am duong xen ke");
	    return 0;
    }
}
}
//9.Thêm phần tử x tại vị trí y trong mảng
void ThemPhanTu(int a[],int &n,int x,int vt){
	printf("\n\nNhap phan tu can them: ");
	scanf("%d",&x);
	printf("Nhap vao vi tri: ");
	scanf("%d",&vt);
	printf("Mang sau khi them la: ");
	for(int i=n;i>=vt;i--)
	  a[i+1]=a[i];
	a[vt]=x;
	n++;
}
void XuatMangThem(int a[],int n)
{
	for(int i=1;i<n+1;i++)
	 printf("%d\t",a[i]);
}
//10.Tính tổng các phần tử là nguyên tố trong mảng
int KiemTraNT(int x){
	int i,dem=0;
	for(int i=1;i<=x;i++)
	 if(x%i==0)
	  dem++;
	if(dem==2)
	 return 1;//dung
	return 0;//sai
}
int TongNguyenTo(int a[],int n){
	int s=0;
	for(int i=1;i<=n+1;i++)
	   if(KiemTraNT(a[i])==1)
	    s=s+a[i];
	printf("\nTong cac so nguyen to la: %d\n",s);
	return s;
}
//11.Sắp xếp mảng theo thứ tự giảm dần
void HoanVi(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
void SapXep(int a[],int n){
	printf("Mang sau khi sap xep la: ");
	for(int i=1;i<n;i++)
	   for(int j=i+1;j<n+1;j++)
	     if(a[i]<a[j])
	       HoanVi(a[i],a[j]);
}
void XuatMangSapXep(int a[],int n)
{
	for(int i=1;i<n+1;i++)
	 printf("%d\t",a[i]);
}
//Kết thúc bài tập
int main(){
	int n,vt,a[100],x;
	NhapN(n);
	NhapMang(a,n);
	XuatMangAm(a,n);
	KiemTra(a,x);
	DemSoPhanTu(a,n);
	TrungBinhChan(a,n);
	XoaPhanTu(a,n,vt);  XuatMangXoa(a,n);
    TimVTMin(a,n); 
    KtAmDuong(a,n);
    ThemPhanTu(a,n,x,vt);   XuatMangThem(a,n);
    TongNguyenTo(a,n);
    SapXep(a,n);  XuatMangSapXep(a,n);
}