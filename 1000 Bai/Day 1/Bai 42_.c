tinh(int k)
{
    int i,s=0;
    for (i=1;i<=k;i++)
        s+=i;
    return s;
}
main()
{
    int i,n=123;
    for (i=n;i>=1;i--)
    if (tinh(i)<=n) {printf("So do la : %d ",i); return;}
}
