main()
{
    int s,a,a1,b;
    printf("Nhap so nguyen 2 chu so : ");
    scanf("%d",&s);
    a=s/100;
    printf("\n");
    if(a==0) printf("Khong Tram ");
    if(a==1) printf("Mot Tram ");
    if(a==2) printf("Hai Tram ");
    if(a==3) printf("Ba Tram ");
    if(a==4) printf("Bon Tram ");
    if(a==5) printf("Nam Tram ");
    if(a==6) printf("Sau Tram ");
    if(a==7) printf("Bay Tram ");
    if(a==8) printf("Tam Tram ");
    if(a==9) printf("Chin Tram ");
    a1=(s/10)%10;
    if(a1==0) printf("Linh ");
    if(a1==1) printf("Muoi ");
    if(a1==2) printf("Hai muoi ");
    if(a1==3) printf("Ba muoi ");
    if(a1==4) printf("Bon muoi ");
    if(a1==5) printf("Nam muoi ");
    if(a1==6) printf("Sau muoi ");
    if(a1==7) printf("Bay muoi ");
    if(a1==8) printf("Tam muoi ");
    if(a1==9) printf("Chin muoi ");

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

