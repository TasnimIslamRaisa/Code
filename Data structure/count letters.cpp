#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    int i,d=a.size(),f[128]={0};
    for(i=0;i<d;i++){
        f[a[i]]++;
    }
    int max =f[0];
    for(i=0;i<128;i++){
      if(f[i]!=0){
        char b=i;
     cout<<b<<" : "<<f[i]<<endl;
        }
    }
    return 0;
}
