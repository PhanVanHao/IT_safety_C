tong(int n)
{
    if (n==1) return 1;
    return n+tong(n-1);
}
main()
{
    int i;
    for (i=5000;i>=130;i--)
    if(tong(i)<10000) {printf("so lon nhat la :%d",i);return;}
}
