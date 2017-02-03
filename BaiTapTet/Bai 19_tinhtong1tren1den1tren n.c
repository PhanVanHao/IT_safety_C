float pp1(int n)
{
    int i;
    float s;
    for (i=1;i<=n;i++)
        s+=(float)1/i;
    return s;
}
float dequy(int n)
{
    if (n==1) return 1;
    return (1/(float)n)+dequy(n-1);
}
main()
{
    int n;
    printf("Nhap n : ");
    scanf("%d",&n);
    printf("\nPhuong phap 1 : S=%f",pp1(n));
    printf("\nDe quy        : S=%f",dequy(n));
}
