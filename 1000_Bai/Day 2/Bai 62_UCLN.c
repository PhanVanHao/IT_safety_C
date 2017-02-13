int UCLN(int a,int b)
{
    int i,c;
    c=(a>b)?a/2:b/2;
    for (i=c;i>=1;i--)
        if(a%i==0&&b%i==0) return i;
}
main()
{
    int a=12,b=24;
    printf("UCLN cua a va b la %d",UCLN(a,b));
}
