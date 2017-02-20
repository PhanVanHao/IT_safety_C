main()
{
    int ng,th,nm;
    nhap:
    printf("Nhap ngay thang nam :");
    scanf("%d%d%d",&ng,&th,&nm);
    if(th==1||th==3||th==5||th==7||th==8||th==10||th==12)
    printf("Thang co 31 ngay");
    if(th==4||th==6||th==9||th==11)
    printf("Thang co 30 ngay");
    if(nm%100==0) if (nm%400==0) printf("thang co 29 ngay");else printf("thang co 28 ngay");
    else if(nm%4==0) printf("thang co 29 ngay"); else printf("thang co 28 ngay");

}
