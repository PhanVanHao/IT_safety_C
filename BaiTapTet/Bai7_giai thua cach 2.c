main()
{
    int i,n,s=1;
    printf("Nhap n : ");
    scanf("%d",&n);
    for (i=1;i<n;i++)
        s+=s*i;
    printf("%d! = %d",n,s);
}
