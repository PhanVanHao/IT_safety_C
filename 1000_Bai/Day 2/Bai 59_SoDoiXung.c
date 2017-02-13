int kt_dn(int n)
{
 int i,x,kt=1;
 char s[10];
 ltoa(n,s,10);
 x=strlen(s);
 for(i=0;i<x/2;i++)
  if(s[i]!=s[x-i-1])
   kt=0;
 if(kt==0)
  return 0;
  return 1;
}
main()
{
    int n=122221;
    if(kt_dn(n)) printf("So doi xung");
    else printf("So khong doi xung");
}
