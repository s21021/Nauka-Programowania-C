#include <iostream>

using namespace std;

int uczniowie , cukierki , x, y;
int main(){

    cout<<"ilość uczniow:";
    cin>>uczniowie;

    cout<<"ilość cukierkow:";
    cin>>cukierki;

    x = cukierki/(uczniowie-1);
    cout<<"ilość cukierków dla ucznia:"<< x;

    y = cukierki-x*(uczniowie-1);
    cout<<endl<<"ile zostanie:"<<y;

    return 0;
}