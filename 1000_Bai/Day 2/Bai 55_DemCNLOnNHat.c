dcsnn(int n1,int d)
{
    int d1=0;
    do
    {   if((n1%10)==d) d1++;
        n1=n1/10;
    }while(n1/10!=0);
    if (n1==d) d1++;
    return d1;
}
main()
{
    int n=44433222,d=n%10,d1=0;
    int n1=n;
    do
    {
         n=n/10;
         if((n%10)>d) d=n%10;

    }while(n/10!=0);
    if (n>d) d=n;
    printf("chu so lon nhat cua n = %d",d);
    printf("\ncac chu so lon nhat cua n = %d",dcsnn(n1,d));
}


