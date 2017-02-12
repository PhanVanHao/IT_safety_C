dequy(int n)
{
    if (n==1) return 1;
    return dequy(n-1)+n;
}
main()
{
    int i,n=5,s=0;
    for (i=1;i<=n;i++)
        s+=dequy(i);
    printf("Tong = %d",s);
}

