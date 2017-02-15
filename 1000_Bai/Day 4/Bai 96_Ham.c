kq1(int x)
{
 return 2*pow(x,2)+5*x+9;
}
kq2(int x)
{
 return -2*pow(x,2)+4*x-9;
}
main()
{
    int x,kq;
    printf("Nhap x: ");
    scanf("%d",&x);
    if(x>=5) kq=kq1(x);
    else kq=kq2(x);
    printf("KQ la :%d",kq);
}
