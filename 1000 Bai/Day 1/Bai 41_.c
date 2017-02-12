float dequy(int n)
{
    if (n==2) return (1+1)/(1+1);
    return (1+1)/dequy(n-1);
}

main()
{
    float i,n=10;
    printf("KQ la %.13f : ",1/dequy(n));
}
