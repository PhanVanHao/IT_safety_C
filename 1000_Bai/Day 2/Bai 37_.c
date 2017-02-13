float dequy(int n)
{
    if (n==3) return n+sqrt(n-1);
    return n+sqrt(dequy(n-1));
}
main()
{
    float i,n=4;
    printf("Tong la %.13f : ",dequy(n));
}
