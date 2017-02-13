kt_d(int n)
{
    int pre1,pre2,fg=2;
    do
    {
        pre1=n%10;//don vi//
        n=n/10;
        pre2=n%10;//so cap thap tiep theo
        if(pre2<pre1) fg--;
    }while(n!=0);
    if(fg==1) return 1;
    return 0;
}
main()
{
    int n=54321;
    if(kt_d(n)) printf("Day giam dan");
    else printf("Day khong giam dan");
}

