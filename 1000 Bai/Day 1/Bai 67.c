toantu(int n,int x)
{
    if (n==1) return x;
    if(n%2==0) return toantu(n-1,x)+pow(x,n);
    if(n%2!=0) return toantu(n-1,x)-pow(x,n);
}
main()
{
    int n=4,x=1;
    printf("KQ = %d",toantu(n,x));
}
