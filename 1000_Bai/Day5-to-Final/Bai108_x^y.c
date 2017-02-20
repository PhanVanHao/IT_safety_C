float canbacN(float n,int x)
{
    return pow(n,x);
}
main()
{
    int x=3;
    float y=100;
    printf("%.3f^%d=%f",y,x,canbacN(y,x));
}

