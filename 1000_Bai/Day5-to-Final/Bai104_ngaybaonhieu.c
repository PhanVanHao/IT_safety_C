#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   main1 : {int i,n,t,nm,nh,temp,temp2=0,ngay=0;
 printf("nam co nhuan khong?\nCo nhap 1 \nKhong nhap 2\nkhong biet?\nnhap nam 3 \nhoac so khac de ket thuc chuong trinh\n");
 scanf("%d",&nh);
 if(nh==1) printf("\nSelect Nhuan\n");
 else if(nh==2) printf("\n[Select Khong nhuan]\n ");
 else if(nh==3) {printf("\nNhap nam di anh tinh cho ");
 scanf("%d",&nh);
 temp=nh;temp2++;
 if((nh%4)==0) {nh=1; if (nh%100==0) if(nh%400==0) nh=1;
 else nh=2;}
 else nh=2;
 if(nh==1) printf("\n [Select Nhuan]\n");
 else if(nh==2) printf("\n[Select Khong nhuan]\n ");
 }

 printf("\n\n_________________________________________________________\n");
 switch(nh)
 {case 1:


    printf("Nhap ngay ");
    scanf("%d",&n);
    if (n<1||n>31) {printf("\nngay sai cmnr\m");getch();return(0);}
    printf("\nNhap thang ");
    scanf("%d",&t);
    if (t<1||t>12) {printf ("\nthang sai cmnr\n");getch(); return(0);}
    printf("\nNhap nam ");
    scanf("%d",&nm);
    for (i=1;i<=t-1;i++)
    {
        if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        ngay+=31;
        else if (i==2) ngay+=29;
        else ngay +=30;
    }
    printf("Day la ngay thu %d",ngay+n); break;

case 2:
    printf("Nhap ngay ");
    scanf("%d",&n);
    if (n<1||n>31) {printf("\nngay sai cmnr\m");getch();return(0);}
    printf("\nNhap thang ");
    scanf("%d",&t);
    if (t<1||t>12) {printf ("\nthang sai cmnr\n");getch(); return(0);}
    printf("\nNhap nam ");
    scanf("%d",&nm);
    for (i=1;i<=t-1;i++)
    {
        if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            ngay+=31;
        else if (i==2) ngay+=28;
        else ngay +=30;
    }
    printf("Day la ngay thu %d",ngay+n);break;
};
}}
