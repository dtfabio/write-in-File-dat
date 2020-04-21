#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    fstream fquarta;
    string nome;
    int eta;
    int k;

fquarta.open("C:/4cdati/archivio.dat", ios::out);

    for(k=1;k<=3;k++)
    {
                     cout<<"inserire il "<<k << " nome: ";
                     cin>>nome;
                     cout<<"inserire l'eta del "<<k <<" ragazzo";
                     cin>>eta;
                     fquarta<< nome<<" ";
                     fquarta<< eta<<endl;
    }
fquarta.close();

system("pause");
}
