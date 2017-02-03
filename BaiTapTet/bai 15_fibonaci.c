main1(int n)
{
    int a[30],i;
    a[0]=a[1]=1;
    for (i=2;i<n;i++)
        a[i]=a[i-2]+a[i-1];
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
}
dequy(int n)
{
    if (n==1||n==2) return 1;
    return dequy(n-2)+dequy(n-1);
}
main()
{
    int n=30,i;
    main1(n);
    printf("\n\nDequy:\n");
    for (i=1;i<=n;i++)
        printf("%d ",dequy(i));
}
