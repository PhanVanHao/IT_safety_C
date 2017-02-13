kt(int n)
{
    while(n%10!=0)
    {
        if((n%10)%2==0) return 0;
        n=n/10;
    }
    return 1;
}
main()
{
    int n=1111;
    if(kt(n)) printf("Toan so le");
    else printf("Khong toan so le");
}
