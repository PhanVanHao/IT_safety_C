kt(int n)
{
    int i,c=sqrt(n);
    if (n==1) return 0;
    for (i=2;i<=c;i++)
        if (n%i==0) return 0;
    return 1;
}
main()
{
    int n=11;
    if (kt(n)) printf("So Nguyen To");
    else printf("K phai so nt");
}
