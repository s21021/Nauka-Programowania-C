#include <iostream>

using namespace std;

string PIN;
int main(){

    cout<<"podaj pin karty:";
    cin>>PIN;

    if(PIN == "1234"){
        cout<<"Poprawny pin";
    }
    else{
        cout<<"niepoprwny pin";
    }


    return 0;
}