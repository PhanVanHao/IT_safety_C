gt(int n)
{
    if (n==0) return 1;
    return gt(n-1)*n;
}
main()
{
    float i,n=10,d=0;
    for (i=1;i<=n;i++)
        d=sqrt(d+gt(i));
    printf("Tong la %.13f : ",d);
}


