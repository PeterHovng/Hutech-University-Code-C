/*
Bài 1 ( 5 điểm): Định nghĩa kiểu dữ liệu Phân Số(tư số và mẫu số). Viết chương trình thực hiện:
1. Nhập một phân số
2. Xuất một phân số
3. Rút gọn phân số
4. Tính tổng hai phân số
5. So sánh hai phân số
6. Nhập vào dãy các phân số
7.xuất  dãy phân số
8. Tính Tổng dãy
9.Tìm phân số lớn nhất
10. sắp xếp dãy phân số tăng dần.
Bài 2(5 điểm): Viết chương trình quản lý Sinh Viên, thông tin về một sinh viên gồm có:
Mã số sinh viên(chuỗi 10 ký tự), Họ và Tên SV( chuỗi 100 ký tự), Ngày tháng năm sinh( kiểu date dd/mm/yy), giới tính( Nam hoặc Nữ), Lớp( chuỗi 7 ký tự trong đó 2 ký tự đầu là năm học, 1 ký tự tiếp theo là bậc học( D:Đại Học,C: Cao đẳng), 2 ký tự tiếp theo là ngành học(TH: Tin Học, KT: Kế Toán, QT: Quản trị. ĐT: Điện Tử...),2 ký tự cuối là số thứ tự lớp), Điểm toán, lý, tin học là kiểu số thực.
1.Viết hàm nhập 1 sinh viên
2. Viết hàm xuất 1 sinh viên
3. Viết hàm nhập danh sách SV
4. Viết hàm Xuất danh sách SV
5. Viết hàm tìm SV có điểm trung bình lớn nhất.
6. đếm số lượng SV có điểm trung bình <5
7.Xuất danh sách SV là nữ
8. sắp xếp danh sách SV tăng dần theo cột điểm trung bình.
*/
#include <stdio.h>
#include <math.h>
//cau 1
typedef struct PHANSO
{
	int Tu;
	int Mau;
}PS;
void Nhap(PS &x)
{
	printf("Nhap Tu : ");
	scanf("%d", &x.Tu);
	do
	{
		printf("Nhap Mau : ");
		scanf("%d", &x.Mau);
	} while (x.Mau == 0);
}
void Xuat(PS x)
{
	printf("%d/%d", x.Tu, x.Mau);
}
int USCLN(int m, int n)
{
	if (m % n == 0)
		return n;
	return USCLN(n, m % n);
}
void RutGon(PS x)
{
	int a,b;
	a = x.Tu;
	b = x.Mau;
	int i = USCLN(a , b);
	a = a / i;
	b = b / i;
	if ((a < 0 && b < 0) || (a > 0 && b < 0))
	{
		a = -a;
		b = -b;
	}
	if (a % b == 0) 
	printf("%d \n",a / b);
	else
	printf("%d/%d \n",a , b);
}
void QUYDONG(PS x,PS y,int &a,int &b,int &mauchung)
{
	a = x.Tu * y.Mau;
	b = x.Mau * y.Tu;
	mauchung = x.Mau * y.Mau;
}
PS PHANSO(int a,int b)
{
	PS c;
	c.Tu=a;
	c.Mau=b;
	return c;
}
void Tong(PS x,PS y)
{
	int a,b,mauchung;
	QUYDONG(x,y,a,b,mauchung);
	RutGon(PHANSO(a+b,mauchung));
}
PS Tongz(PS x,PS y)
{
	int a,b,mauchung;
	QUYDONG(x,y,a,b,mauchung);
	return PHANSO(a+b,mauchung);
}
char SoSanh(PS x,PS y)
{
	int a,b,mauchung;
	QUYDONG(x,y,a,b,mauchung);
	if (a>b)
		return '>';
	else 
		if (a<b)
			return '<';
		else
			return '=';
}
void NhapDay(PS c[], int n)
{
	for (int i=1;i<=n;i++)
	{
		printf("Phan phan so thu %d\n",i);
		Nhap(c[i]);
	}
}
void XuatDay(PS c[],int n)
{
	for (int i=1;i<=n;i++)
	{
		Xuat(c[i]);
		if (i!=n)
		printf(" + ");
	}
}
void XuatDay2(PS c[],int n)
{
	for (int i=1;i<=n;i++)
	{
		Xuat(c[i]);
		if (i!=n)
		printf("   ");
	}
}
void TongDay(PS c[],int n)
{
	PS temp;
	for (int i=1;i<=n-1;i++)
	{
		if (i<n-1)	
		{
			temp=c[i+1];
			c[i+1]=Tongz(c[i],c[i+1]);
		}
		else
			Tong(c[n-1],c[n]);
	}
	for (int i=1;i<=n-1;i++)
	{
		if (i<n-1)	
			c[i+1]=temp;
	}
}
bool PSLonHon(PS x,PS y)
{
	int a,b,mauchung;
	QUYDONG(x,y,a,b,mauchung);
	if (a>b)
		return true;
	else
		return false;
}
bool PSNhoHon(PS x,PS y)
{
	int a,b,mauchung;
	QUYDONG(x,y,a,b,mauchung);
	if (a<b)
		return true;
	else
		return false;
}
PS PSLonnhat(PS c[],int n)
{
	PS max=c[1];
	for (int i=2;i<=n;i++)
	{
		if (PSLonHon(max,c[i])==false)
			max =c[i];
	}
	return max;
}
void HoanVi(PS &x, PS &y)
{
	PS q=x;
	x=y;
	y=q;
}
void SapXepPhanSoTheoTangDan(PS a[],int n)
{
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (PSNhoHon(a[i],a[j]))
				HoanVi(a[i],a[j]);
}
int main()
{
	PS a,b,c[1000];
	printf("1.Nhap phan so dau tien\n");
	Nhap(a);
	printf("2.Phan so dau tien : ");
	Xuat(a);
	printf("\n");
	printf("3.Rut gon phan so dau tien : ");
	RutGon(a);
	printf("Nhap phan so dau tien\n");
	Nhap(a);
	printf("Nhap phan so thu hai\n");
	Nhap(b);
	printf("4.Tong cua hai phan so ");
	Tong(a,b);
	printf("5.So sanh hai phan so : a %c b\n",SoSanh(a,b));
	int n;
	printf("6.Nhap vao day cac phan so: ");
	scanf("%d",&n);
	NhapDay(c,n);
	printf("7.Xuat day co %d phan so ",n);
	XuatDay(c,n);
	printf("\n");
	printf("8.Tong day = ");
	TongDay(c,n);
	printf("9.Phan so lon nhat : ");
	Xuat(PSLonnhat(c,n));
	printf("\n10.Sap Xep Phan so tang dan : ");
	SapXepPhanSoTheoTangDan(c,n);
	XuatDay2(c,n);
	printf("\n");
	return 0;
}
/*
//cau 2
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
typedef struct SinhVien
{
	char mssv[11];
	char ten[101];
	int day,month,year;
	char gt[4];
	char lop[8];
	float toan,ly,tinhoc;
	float DTB;
}sv;
float DiemTB(sv a)
{
	return (a.toan+a.ly+a.tinhoc)/3;
}
void NhapSV(sv &a)
{
	printf("----------------------------------------\n");
	printf("Nhap MSSV : ");
	fflush(stdin);
	gets(a.mssv);
	printf("Nhap Ten SV : ");
	fflush(stdin);
	gets(a.ten);
	printf("Nhap ngay/thang/nam sinh : ");
	scanf("%2d/%2d/%4d",&a.day,&a.month,&a.year);
	printf("Nhap gioi tinh (Nam/Nu) : ");
	fflush(stdin);
	gets(a.gt);
	printf("Nhap Lop : ");
	fflush(stdin);
	gets(a.lop);
	printf("Nhap diem Toan : ");
	scanf("%f",&a.toan);
	printf("Nhap diem Ly : ");
	scanf("%f",&a.ly);
	printf("Nhap diem Tin hoc : ");
	scanf("%f",&a.tinhoc);
	a.DTB=DiemTB(a);
	printf("----------------------------------------\n");
}
void XuatSV(sv a)
{
	printf("\n----------------------------------------");
	printf("\nMSSV : %s",a.mssv);
	printf("\tTen SV : %s",a.ten);
	printf("\tNgay/thang/nam sinh : %d/%d/%2d",a.day,a.month,a.year);
	printf("\nGioi tinh (Nam/Nu) : %s",a.gt);
	printf("\tLop : %s",a.lop);
	printf("\tToan : %.2f",a.toan);
	printf("\tLy : %.2f",a.ly);
	printf("\tTin hoc : %.2f",a.tinhoc);
	printf("\n----------------------------------------\n");
}
void NhapDanhSachSv(sv a[],int n)
{
	for (int i=1;i<=n;i++)
	{
		NhapSV(a[i]);
	}
}
void XuatDanhSachSv(sv a[],int n)
{
	for (int i=1;i<=n;i++)
	{
		XuatSV(a[i]);
	}
}
sv SVDTBCaoNhat(sv a[],int n)
{
	int caonhat=1;
	for (int i=2;i<=n;i++)
	{
		if	(a[caonhat].DTB<a[i].DTB)
			caonhat	=	i;
	}
	return a[caonhat];
}
int DemDTBNhohon5(sv a[],int n)
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if	(a[i].DTB<5)
			dem=dem+1;
	}
	return dem;
}
void DanhSachSVNu(sv a[],int n)
{
	for (int i=1;i<=n;i++)
	{
		if	(strcmp(a[i].gt,"Nu")==0)
			XuatSV(a[i]);
	}
}
void HoanVi(sv &x, sv &y)
{
	sv q=x;
	x=y;
	y=q;
}
void SapXepTangDanTheoDTB(sv a[], int n)
{
    sv temp;
    for(int i = 1; i <= n; i++)
	{
        for(int j = i + 1; j <= n; j++)
		{
            if(a[i].DTB > a[j].DTB){
				HoanVi(a[i],a[j]);       
            }
        }
    }
}

void Menu()
{
	printf("*****************************************************************\n");
	printf("1 : Nhap -> Xuat xuat 1 SV\n");
	printf("2 : Nhap -> Xuat danh sach Sinh Vien\n");
	printf("3 : Nhap danh sach -> Tim SV co diem trung binh lon nhat\n");
	printf("4 : Nhap danh sach -> Dem so luong SV co DTB < 5\n");
	printf("5 : Nhap danh sach -> Xuat Danh Sach SV Nu\n");
	printf("6 : Nhap danh sach -> Sap Xep Danh Sach SV Theo Thu Tu Tang Dan\n");
	printf("0 : Thoat\n");
	printf("*****************************************************************\n");
}
int main()
{
	sv a,b[100];
	int n;
	int chon;
	do
	{
		Menu();
		printf("Hay nhap cong viec : ");
		scanf("%d",&chon);
	switch (chon)
	{
	case 1:
	{
		NhapSV(a);
		XuatSV(a);
		getch();
		system("cls");
		break;
	}
	case 2:	
	{
        printf("Nhap so sinh vien : ");
		scanf("%d",&n);
		printf("Nhap danh sach sinh vien : \n");
		NhapDanhSachSv(b,n);
		getch();
		system("cls");
		printf("Xuat danh sach sinh vien : \n");
		XuatDanhSachSv(b,n);
		getch();
		system("cls");
		break;
	}
	case 3:	
	{
		printf("Nhap so sinh vien : ");
		scanf("%d",&n);
		printf("Nhap danh sach sinh vien : \n");
		NhapDanhSachSv(b,n);
		getch();
		system("cls");
		printf("Xuat sinh vien diem trung binh cao nhat : \n");
		XuatSV(SVDTBCaoNhat(b,n));
		getch();
		system("cls");
		break;
	}
	case 4:	
	{
		printf("Nhap so sinh vien : ");
		scanf("%d",&n);
		printf("Nhap danh sach sinh vien : \n");
		NhapDanhSachSv(b,n);
		getch();
		system("cls");
		printf("Dem sinh vien co DTB < 5 : %d",DemDTBNhohon5(b,n));
		getch();
		system("cls");
		break;
	}
	case 5:	
	{
		printf("Nhap so sinh vien : ");
		scanf("%d",&n);
		printf("Nhap danh sach sinh vien : \n");
		NhapDanhSachSv(b,n);
		getch();
		system("cls");
		printf("Xuat Danh sach Sinh vien nu : \n");
		DanhSachSVNu(b,n);
		getch();
		system("cls");
		break;
	}
	case 6:	
	{
		printf("Nhap so sinh vien : ");
		scanf("%d",&n);
		printf("Nhap danh sach sinh vien : \n");
		NhapDanhSachSv(b,n);
		getch();
		system("cls");
		printf("Sap Xep Tang Dan Theo Diem Trung Binh : \n");
		SapXepTangDanTheoDTB(b,n);
		XuatDanhSachSv(b,n);
		getch();
		system("cls");
		break;
	}
	default: chon=0;
	}
	}while(chon!=0);
	return 0;
}
*/