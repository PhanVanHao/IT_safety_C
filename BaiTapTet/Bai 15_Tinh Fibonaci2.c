fibo(int n)
{
    if (n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
fibo2(int n)
{
    int a[50],i;
    a[0]=a[1]=1;
    for (i=2;i<=(n-1);i++)
        a[i]=a[i-1]+a[i-2];
    return a[n-1];
}
main()
{
    int n;
    nhap:
    printf("Nhap n : (yeu cau n>0)");
    scanf("%d",&n);
    if(n<1) goto nhap;
    printf("\nDequy Fibonaci thu %d = %d",n,fibo(n));
    printf("\n\nVonglap Fibonaci thu %d = %d",n,fibo2(n));
}
