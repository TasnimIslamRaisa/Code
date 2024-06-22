#include <iostream>
using namespace std;
int main() {
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    int a[3][3],b[3][3],i,j,k,r1,c1,r2,c2;
    cout<<"Enter row 1 & column 1 : ";
    cin>>r1>>c1;
    cout<<"Enter number of 1st matrix : "<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter row 2 & column 2 : ";
    cin>>r2>>c2;
    cout<<"Enter number of 2nd matrix : "<<endl;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
   int mult[3][3];
    for(i = 0; i < r1; ++i)
         for(j = 0; j < c2; ++j)
         {
             mult[i][j]=0;
         }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;++k){
                mult[i][j]+=a[i][k] * b[k][j];
            }
        }
    }
    cout<<"Multiplication of matrix : "<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
           cout<<mult[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}