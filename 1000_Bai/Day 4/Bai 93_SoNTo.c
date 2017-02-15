kt(int a)
{
    int i,c=sqrt(a);
    for (i=2;i<=c;i++)
        if(a%i==0) return 0;
    return 1;
}
main()
{
    int a=113;
    if(kt(a)) printf("So nguyen to");
    else printf("Khong phai so nguyen to");
}
