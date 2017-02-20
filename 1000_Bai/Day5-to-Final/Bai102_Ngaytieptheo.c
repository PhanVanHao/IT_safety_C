#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   main1 : {int n,t,nm,nt,tt,nmt,nh,temp,temp2=0;
nt=0; tt=0;nmt=0;
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



   if (t==1);{
    if (n<31) {nt=n+1;tt=1;}
    if (n==31) {nt=1;
    tt=2;}}

    if (t==2) {
    if (n>29) {printf("ngay sai cmnr");getch();return(0);}
    else {if (n<29) {nt=n+1;tt=2;}
    if (n==29) {nt=1;
    tt=3;}}}

    if (t==3) {
     if (n<31) {nt=n+1;tt=1;}
    if (n==31) {nt=1;tt=4;}
    }
    if (t==4) {
    if (n>30) {printf("ngay sai cmnr");getch();return(0);}
     else {if (n<30) {nt=n+1;tt=4;}
    if (n==30) {nt=1;tt=5;}} }
   if (t==5) {
     if (n<31) {nt=n+1;tt=5;}
    if (n==31) {nt=1;tt=6;} }
    if (t==6) {
    if (n>30) {printf("ngay sai cmnr");getch();return(0);}
    else {if (n<30) {nt=n+1;tt=6;}
    if (n==30) {nt=1;tt=7;}} }
    if (t==7) {
     if (n<31) {nt=n+1;tt=7;}
    if (n==31) {nt=1;tt=8;} }
   if (t==8) {
     if (n<31) {nt=n+1;tt=8;}
    if (n==31) {nt=1;tt=9;} }
   if (t==9) {
    if (n>30) {printf("ngay sai cmnr");getch();return(0);}
    else {if (n<30) {nt=n+1;tt=9;}
    if (n==30) {nt=1;tt=10;}} }
    if (t==10) {
     if (n<31) {nt=n+1;tt=10;}
    if (n==31) {nt=1;tt=11;} }
    if (t==11) {
    if (n>30) {printf("ngay sai cmnr");getch();return(0);}
    else {if (n<30) {nt=n+1;tt=11;}
    if (n==30) {nt=1;tt=12;} }}
    if (t==12) {
     if (n<31) {nt=n+1;tt=12;}
    if (n==31) {nt=1;tt=1;}}



    nmt=nm;
    if (tt==1) {if (nt==1) nmt=nm+1;}
    if (temp2==1) if(temp!=nm) {printf("Co ve nhu nam xet' va nam nhap vao khong giong nhau :)\nNhap lai nhe \n\n____________________________________________\n"); goto main1;}
    printf("\nNgay tiep theo la %d/%d/%d",nt,tt,nmt);
    getch();
    return 0;
case 2:

    printf("Nhap ngay ");
    scanf("%d",&n);
    if (n<1||n>31) {printf("\nngay sai cmnr\m");getch();return(0);}
    printf("\nNhap thang ");
    scanf("%d",&t);
    if (t<1||t>12) {printf ("\nthang sai cmnr\n");getch(); return(0);}
    printf("\nNhap nam ");
    scanf("%d",&nm);

   if (t==1);{
    if (n<31) {nt=n+1;tt=1;}
    if (n==31) {nt=1;
    tt=2;}}

    if (t==2) {
    if (n>28) {printf("ngay sai cmnr");getch();return(0);}
    else {if (n<29) {nt=n+1;tt=2;}
    if (n==28) {nt=1;
    tt=3;}}}

    if (t==3) {
     if (n<31) {nt=n+1;tt=1;}
    if (n==31) {nt=1;tt=4;}
    }
    if (t==4) {
    if (n>30) {printf("ngay sai cmnr");getch();return(0);}
     else {if (n<30) {nt=n+1;tt=4;}
    if (n==30) {nt=1;tt=5;}} }
   if (t==5) {
     if (n<31) {nt=n+1;tt=5;}
    if (n==31) {nt=1;tt=6;} }
    if (t==6) {
    if (n>30) {printf("ngay sai cmnr");getch();return(0);}
    else {if (n<30) {nt=n+1;tt=6;}
    if (n==30) {nt=1;tt=7;}} }
    if (t==7) {
     if (n<31) {nt=n+1;tt=7;}
    if (n==31) {nt=1;tt=8;} }
   if (t==8) {
     if (n<31) {nt=n+1;tt=8;}
    if (n==31) {nt=1;tt=9;} }
   if (t==9) {
    if (n>30) {printf("ngay sai cmnr");getch();return(0);}
    else {if (n<30) {nt=n+1;tt=9;}
    if (n==30) {nt=1;tt=10;}} }
    if (t==10) {
     if (n<31) {nt=n+1;tt=10;}
    if (n==31) {nt=1;tt=11;} }
    if (t==11) {
    if (n>30) {printf("ngay sai cmnr");getch();return(0);}
    else {if (n<30) {nt=n+1;tt=11;}
    if (n==30) {nt=1;tt=12;} }}
    if (t==12) {
     if (n<31) {nt=n+1;tt=12;}
    if (n==31) {nt=1;tt=1;}}



    nmt=nm;
    if (tt==1) {if (nt==1) nmt=nm+1;}
    if (temp2==1) if(temp!=nm) {printf("Co ve nhu nam xet' va nam nhap vao khong giong nhau :) \nNhap lai nhe \n\n____________________________________________\n"); goto main1;}
    printf("\nNgay tiep theo la %d/%d/%d",nt,tt,nmt);
    getch();
    return 0;}
};
}
