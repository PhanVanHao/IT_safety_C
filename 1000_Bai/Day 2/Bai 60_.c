kt_d(int n)
{
    int pre1,pre2,ft=1;
    do
    {
        pre1=n%10;//don vi//
        n=n/10;
        pre2=n%10;//so cap thap tiep theo
        if(pre2>pre1) ft--;
    }while(n!=0);
    if(ft==1) return 1;
    return 0;
}
main()
{
    int n=123456;
    if(kt_d(n)) printf("Day tang dan");
    else printf("Day khong tang dan");
}
