 #include<stdio.h>
 int main()
 {
     int i,j,n,p,c1,c2,c3;
     scanf("%d",&n);
     c3=0;
     for(i=0;i<n;i++){
        c1=0;c2=0;
        for(j=0;j<3;j++){
            scanf("%d",&p);
            if(p==1)
                c1++;
            else c2++;
        }
        if(c1>c2)
            c3++;
     }
     printf("%d\n",c3);
     return 0;
 }
