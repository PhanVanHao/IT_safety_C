gt(int n)
{
    if (n==0) return 1;
    return gt(n-1)*n;
}
main()
{
    int n,i;
    float s;
    n=5;
    for (i=1;i<=n;i++)
        s+=(float)gt(i);
    printf("tong = %f",s);
}


