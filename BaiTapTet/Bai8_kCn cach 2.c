gt(int n)
{
    int i,s=1;
    for (i=1;i<n;i++)
        s+=s*i;
    return s;
}
main()
{
    int n,k,gtx;
    nhap:
    printf("Nhap k,n (k<=n) :");
    scanf("%d%d",&k,&n);
    while(k>n)
    {
        printf("k=%d>n=%d . Vui long nhap lai\n",k,n);
        goto nhap;
    }
    gtx=(gt(n)/(gt(k)*gt(n-k)));
    printf("%dC%d=%d",k,n,gtx);
}
