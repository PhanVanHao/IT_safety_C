main()
{
    int m=1444,n=120,i;
    for (i=m>n?m:n;i>=1;i--)
    if(m%i==0&&n%i==0) {printf("UCLN = %d",i);return;}
}
