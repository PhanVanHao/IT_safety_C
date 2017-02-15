tong(int n)
{
    if (n==1) return 1;
    return n+tong(n-1);
}
main()
{
    int i;
    for (i=130;i<=10000;i++)
    if(tong(i)>10000) {printf("so nho nhat la :%d",i);return;}
}
