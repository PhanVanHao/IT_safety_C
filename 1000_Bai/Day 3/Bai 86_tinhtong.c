tong(int n)
{
    if (n==1) return pow(1,3);
    return pow(n,3)+tong(n-1);
}
main()
{
    int n=6;
    printf("Tong la %d",tong(n));
}
