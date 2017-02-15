main()
{
    int a,b,c;
    printf("Nhap 3 canh A,B,C : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c) {printf("\nTam giac deu");return;}
    if (a==b||b==c||c==a) if ((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b)) {printf("\nTam Giac Vuong Can");return;}
    else printf("\nTam Giac Can");
    if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b) {printf("\nTam Giac Vuong ");return;}
    if (a>=b+c||b>=a+c||c>=a+b) printf("Khong phai tam giac");
    else printf("\nTam Giac Thuong");

}
