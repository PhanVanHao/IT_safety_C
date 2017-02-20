float canbacN(int n,float x)
{
    return pow(x,(1/(float)n));
}
main()
{
    int n=3;
    float x=100;
    printf("Can bac %d cua %.3f la %.3f",n,x,canbacN(n,x));
}
