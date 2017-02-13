bac1()
{
    float a,b;
    printf("\nGiai phuong trinh Ax+B=0\nNhap A va B\n");
    scanf("%f%f",&a,&b);
    if(a==0&&b!=0) printf("PT vo nghiem");
    if(a==0&&b==0) printf("PT vo so nghiem");
    if(a=!0&&b!=0) printf("PT co mot nghiem x=%f",-b/a);
    else printf("Phuong trinh co nghiem x=0");
}
bac2()
{
    float a,b,c;
    nhap:
    printf("\nGiai phuong trinh Ax^2+Bx+C=0\nNhap A,B,C");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0) goto nhap;



}
bac3()
{

}
main()
{
    int slc;
    printf("Nhap 1 de giai PT bac 1\nNhap 2 de giai PT bac 2\nNhap 3 De giai PT bac 3.\n");
    scanf("%d",&slc);
    if(slc==1) bac1();
    if(slc==2) bac2();
    if(slc==3) bac3();

}
