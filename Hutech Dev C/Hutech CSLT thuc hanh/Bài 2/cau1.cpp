#include<stdio.h>
int main(){
  float a,b;
  printf("\nNhap he so a: ");
  scanf("%f",&a);
  printf("\nNhap he so b: ");
  scanf("%f",&b);
  if(a==0){      //n?u a==0 thì
    if(b==0){    //n?u b==0 thì
      printf("\nPhuong trinh vo so nghiem");
    }else{       //n?u không thì (n?u b!=0 thì)
      printf("\nPhuong trinh vo nghiem");
    }
  }else{         //n?u không thì (n?u a!=0 thì)
    printf("\nPhuong trinh co nghiem x=%g",-b/a);
  }
  return 0;
}