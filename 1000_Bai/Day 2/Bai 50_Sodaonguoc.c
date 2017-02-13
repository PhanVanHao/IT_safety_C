main()
{
    int n=123456789,d=0;
    do
    {    printf("%d",n%10);
         n=n/10;
    }while(n/10!=0);
    printf("%d",n);
}

