main()
{
    long int c=27,tam[1000];
    int i;
    float sq=c;
    for (i=1;i<=1000;i++)
    {
        sq=(sq/3); tam[i]=sq;
        if(sq!=(int)(sq)) {sq=tam[i-1];break;}

    }
    if(sq==1) printf("So 3^k");
    else printf("Khong phai so 3^k");

}

