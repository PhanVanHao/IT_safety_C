gt(int n)
{
    if (n==0) return 1;
    return gt(n-1)*n;
}
main()
{
    int n=5,i,x=4;
    float t;
    for (i=1;i<=n;i++)
        t+=(float)pow(-1,n+1)*pow(x,2*n)/gt(2*n);
    printf("KQ=%f",t);
}

