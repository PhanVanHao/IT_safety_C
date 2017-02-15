kt(int a,int b)
{
    return (a>=0?(b>=0?1:0):(b<0?1:0));
}
main()
{
    float a=9,b=-45;
    if(kt(a,b)) printf("2 So cung dau");
    else printf("2 So khong cung dau");
}
