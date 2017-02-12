tongday(int n)
{
    int i,s;
    for (i=1;i<=n;i++)
        s+=i;
    return s;
}
main()
{
    int n=5,i,x=3;
    float t;
    for (i=1;i<=n;i++)
        t+=pow(x,n)/(float)(pow(-1,n+1)*tongday(n));
    printf("KQ=%f",t);
}

