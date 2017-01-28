
int gt(int n);
int kCn(int k,int n);
int gt(int n)
{
    if (n==0) return 1;
    return gt(n-1)*n;
}
int kCn(int k,int n)
{   if (n==0&&k==0) return 0;
    return (gt(n)/(gt(n-k)));
}
main()
{
    int n,k;
    nhap:
    printf("Nhap k,n (k<=n) :");
    scanf("%d%d",&k,&n);
    while(k>n)
    {
        printf("k=%d>n=%d . Vui long nhap lai\n",k,n);
        goto nhap;
    }
    printf("\n_____________________________________________________\n%dA%d = %d",k,n,kCn(k,n));

}

