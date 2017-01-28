int gt(int n)
{
    if (n==0) return 1;
    return gt(n-1)*n;
}
main()
{
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    printf("Giai thua la : %d ",gt(n));
}
