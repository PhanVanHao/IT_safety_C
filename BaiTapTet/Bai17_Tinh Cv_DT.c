float pi=3.141592;
tamgiac()
{
    printf("ENGAGE TAM GIAC\n");
    int a,b,d,h;
    nhap:
    printf("\nNhap canh day : ");
    scanf("%d",&d);
    printf("\nNhap chieu cao : ");
    scanf("%d",&h);
    printf("\nNhap 2 canh con lai :");
    scanf("%d%d",&a,&b);
    if (a+b<=d||a+d<=b||b+d<=a)
    {printf("\nBan da nhap sai canh tam giac.\nVui long nhap lai.");
    goto nhap;}
    printf("\nC=%d",a+b+d);
    printf("\nS=%d",d*h);
}
vuong()
{   printf("ENGAGE HINH VUONG\n");
    int a;
    printf("\nNhap canh hinh vuong : ");
    scanf("%d",&a);
    printf("\nC=%d\nS=%d",4*a,a*a);
}
chunhat()
{   printf("ENGAGE HINH CHU NHAT\n");
    int a,b;
    printf("\nNhap 2 canh hinh chu nhat : ");
    scanf("%d%d",&a,&b);
    printf("\nC=%d\nS=%d",(a+b)*2,a*b);
}
tron()
{
    printf("ENGAGE HINH TRON\n");
    float r;
    printf("\nNhap ban kinh hinh tron : ");
    scanf("%f",&r);
    printf("\nC=%f\nS=%f",(2*pi*r),(pi*r*r));
}
main()
{
    int select;
    nhap:
    printf("Nhap 1 de tinh cv,dt hinh tam giac\nNhap 2 de tinh cv,dt hinh vuong\nNhap 3 de tinh cv,dt hinh chu nhat\nNhap 4 de tinh cv,dt hinh tron\nNhap 0 de thoat chuong trinh\nEnter Your Selection :  ");
    scanf("%d",&select);
    printf("\n");
    switch(select)
    {
    case 0:break;
    case 1:
    tamgiac();break;
    case 2:
    vuong();break;
    case 3:
    chunhat();break;
    case 4:
    tron();break;
    default:
    printf("\nNhap sai \nVui long nhap lai\nhoac nhap 0 de thoat chuong trinh");goto nhap;
    }
}
