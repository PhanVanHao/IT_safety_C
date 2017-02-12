float dequy(int n)
{
    if (n==1) return n+sqrt(n-1);
    return n+sqrt(n-1);
}
main()
{
    float i,n=5;
    printf("Tong la %.13f : ",sqrt(n)+dequy(n));
}

