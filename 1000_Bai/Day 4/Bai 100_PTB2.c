main()
{
    int a,b,c,delta;
    float x1,x2;
    nhap:
    printf("CHUONG TRINH GIAI PHUONG TRINH BAC 2 : Ax^2+By+C=0\nYeu cau : A#0\nNhap A,B,C : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a==0) goto nhap;
    delta=b*b-4*a*c;
    if(delta<0) printf("Phuong trinh vo nghiem");
    if(delta==0) printf("Phuong trinh co 1 nghiem kep \nx1=x2=%f",(float)(-b/(2*a)));
    if(delta>0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet \nx1=%f\nx2=%f",x1,x2);
    }

}
