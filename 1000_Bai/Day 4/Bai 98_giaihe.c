main()
{
    int a,b,c,d,e,f,aa,bb,cc;
    printf("Giai he\tax+by=c\n\tdx+ey=f\nNhap cac he so.");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    aa=a+d;
    bb=b+e;
    cc=c+f;
    float xx=(-bb/aa);
    if(aa==0&&bb!=0) {printf("PT vo nghiem");return;}
    if(aa==0&&bb==0) {printf("PT vo so nghiem");return;}
    if(aa!=0&&bb!=0) printf("PT co mot nghiem x=%f",xx);
    else printf("Phuong trinh co nghiem x=0");

}
