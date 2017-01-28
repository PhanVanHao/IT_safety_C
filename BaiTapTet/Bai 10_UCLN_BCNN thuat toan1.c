
ucln(int a,int b)
{   while(a!=b)
    {
    if (a>b) a=a-b;
    if (b>a) b=b-a;
    }
    return a;

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

