main()
{
    int n=1234574,d=0;
    do
    {    if((n%10)%2!=0) d++;
         n=n/10;

    }while(n/10!=0);
    if(n%2!=0) d++;
    printf("cac chu so cua n =%d",d);

}
