main()
{
    float n;
    printf("Nhap so: ");
    scanf("%f",&n);
    if((n*2)==(int)(n*2)&&n!=(int)n) printf("\nSo ban nguyen.");
    else printf("\nKhong phai so ban nguyen.");
}
