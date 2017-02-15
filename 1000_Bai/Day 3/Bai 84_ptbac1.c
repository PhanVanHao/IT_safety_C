 main()
 {


    float a,b;
    printf("\nGiai phuong trinh Ax+B=0\nNhap A va B\n");
    scanf("%f%f",&a,&b);
    float c=(-b/a);
    if(a==0&&b!=0) {printf("PT vo nghiem");return;}
    if(a==0&&b==0) {printf("PT vo so nghiem");return;}
    if(a!=0&&b!=0) printf("PT co mot nghiem x=%f",c);
    else printf("Phuong trinh co nghiem x=0");
 }
