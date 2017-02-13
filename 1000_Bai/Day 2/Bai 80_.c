dequy(int n,int x)
{
    if (n==1) return x;
    return dequy(n-1,x)+pow(x,n)+n;
}
main()
{
    int i,n=5,s=0,x=3;
    for (i=1;i<=n;i++)
        s+=dequy(i,x);
    printf("Tong = %d",s);
}


