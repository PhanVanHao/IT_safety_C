gt(int n)
{
    if (n==0) return 1;
    return gt(n-1)*n;
}
float dequy(int n)
{
    if (n==1) return gt(n)+sqrt(gt(n-1));
    return gt(n)+sqrt(gt(n-1));
}

main()
{
    float i,n=5;
    printf("Tong la %.13f : ",sqrt(n)+dequy(n));
}


