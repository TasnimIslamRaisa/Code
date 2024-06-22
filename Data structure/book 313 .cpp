#include<iostream>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int word=0;
    int n=0;
    for(int i=0;i<a.size();i++){
            if(a[i]==' ' && a[i+1]=='T' && a[i+2]=='H' && a[i+3]=='E')
            word++;
            if(a[i]==' ' && a[i+1]=='T' && a[i+2]=='H' && a[i+3]=='E' && a[i+4]==' ')
            word++;
            if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='E' )
            word++;

        }
    cout<<word<<endl;
    return 0;
}
