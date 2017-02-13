dequy(int n)
{
    if(n==1) return 1;
    return n+dequy(n-1);
}
main()
{
    int n=9;
    printf("tong la :%d",dequy(n));
}
