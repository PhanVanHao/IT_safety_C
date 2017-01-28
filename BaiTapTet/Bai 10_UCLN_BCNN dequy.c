ucln(int a,int b)
{   int r;
    if(a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
return ((r=a%b)?ucln(b,r):b);
}
bcnn (int a,int b)
{
return (a*b)/ucln(a,b);
}
main()
{
    int a,b;
    printf("Nhap a,b : ");
    scanf("%d%d",&a,&b);
    printf("UCLN la : %d\nBCNN la : %d",ucln(a,b),bcnn(a,b));
}

