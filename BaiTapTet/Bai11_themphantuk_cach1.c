main()
{
    int a[10]={1,2,3,5,6},k=4,i,n=5,v;
    printf("1,2,3,5,6\n");
    printf("Nhap vi tri chen phan tu k");
    scanf("%d",&v);
    for (i=n;i>=v;i--)
        a[i]=a[i-1];
a[v-1]=k;
    for (i=0;i<=n;i++)
    printf("%d",a[i]);

}
