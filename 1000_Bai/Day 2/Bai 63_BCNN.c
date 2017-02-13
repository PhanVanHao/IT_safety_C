int BCNN(int a,int b)
{
    int i,c=(a>b)?a:b;
    for (i=c;;i++)
        if(i%a==0&&i%b==0) return i;
}
main()
{
    int a=12,b=28;
    printf("BCNN cua a va b la %d",BCNN(a,b));
}

