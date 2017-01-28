ucln(int a,int b)
{   int i;
    for (i=(a>b?b:a);i>1;i--)
    if (a%i==0&&b%i==0) return i;
    return 1;
}
bcnn (int a,int b)
{
    int i;
    for (i=(a>b?a:b);i<a*b;i++)
    if (i%a==0&&i%b==0) return i;
    return a*b;
}
main()
{
    int a,b;
    printf("Nhap a,b : ");
    scanf("%d%d",&a,&b);
    printf("UCLN la : %d\nBCNN la : %d",ucln(a,b),bcnn(a,b));
}

