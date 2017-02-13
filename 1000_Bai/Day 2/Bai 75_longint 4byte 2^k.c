main()
{
    long int c=8;
    int i;
    float sq=c;
    for (i=1;i<=1000;i++)
    {
        sq=(sq/2);
        if(sq!=(int)(sq)) break;

    }
    if(sq*2==1) printf("So 2^k");
    else printf("Khong phai so 2^k");

}
