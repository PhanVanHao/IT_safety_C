main()
{
    int s,a,b;
    printf("Nhap so nguyen 2 chu so : ");
    scanf("%d",&s);
    a=s/10;
    printf("\n");
    if(a==0) printf("Khong ");
    if(a==1) printf("Muoi");
    if(a==2) printf("Hai muoi ");
    if(a==3) printf("Ba muoi ");
    if(a==4) printf("Bon muoi ");
    if(a==5) printf("Nam muoi ");
    if(a==6) printf("Sau muoi ");
    if(a==7) printf("Bay muoi ");
    if(a==8) printf("Tam muoi ");
    if(a==9) printf("Chin muoi ");
    b=s%10;
    if(b==1) printf("Mot");
    if(b==2) printf("Hai");
    if(b==3) printf("Ba");
    if(b==4) printf("Bon");
    if(b==5) printf("Lam");
    if(b==6) printf("Sau");
    if(b==7) printf("Bay");
    if(b==8) printf("Tam");
    if(b==9) printf("Chin");



}
