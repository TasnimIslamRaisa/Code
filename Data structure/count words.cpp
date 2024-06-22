#include<iostream>
using namespace std;
int countsent(string a)
{
    int sent=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='.')
            sent++;
    }
    return sent;
}
int countword(string a)
{
    int word=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==' ')
            word++;
    }
    return word;
}
int main()
{
    string a;
    cout<<"Enter a string = ";
    getline(cin,a);
    cout<<"word : "<<countword(a)+countsent(a)<<endl;
    cout<<"Sentence : "<<countsent(a)<<endl;
    return 0;
}
