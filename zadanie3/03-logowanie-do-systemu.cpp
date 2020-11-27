#include <iostream>

using namespace std;
string login, haslo;
int main(){
    cout<<"podaj login:";
    cin>>login;
    cout<<"podaj hasło:";
    cin>>haslo;

    // "||" - pozwala na wiele odpowiedzi poprawnej
    //0 - 0 = 0
    //1 - 0 = 1
    //0 - 1 = 1
    //1 - 1 = 1
    // "&&" - trzeba wpisac wszystkie odp poprawna .
    //0 - 0 = 0
    //1 - 0 = 0
    //0 - 1 = 0
    //1 - 1 = 1
    if((login == "admin")&&(haslo == "admin")){
        cout<<"jesteś zalogowany";
    } else{
        cout<<"nie udało sie zalogować";
    }

    return 0;
}