float gt(int n)
{
    if (n==0) return 1;
    return gt(n-1)*n;
}
float dequy(int n,int x)
{
    if (n==1) return x;
    return dequy(n-1,x)+(pow(x,2*n)+n)/gt(2*n);
}
main()
{
    int i,n=5,x=3;
    float s;
    for (i=1;i<=n;i++)
        s+=dequy(i,x);
    printf("Tong = %f",s);
}
