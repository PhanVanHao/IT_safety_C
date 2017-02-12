gt(int n)
{
    if (n==0) return 1;
    return gt(n-1)*n;
}
main()
{

    int n=5,i,x=4;
    float s;
    for (i=0;i<=n;i++)
    s+=pow(-1,n) * pow(x,2*n)+gt(1/(2*n + 1));
    printf("KQ=%f",s);
}
