#include <iostream>

using namespace std;
int data ;

int main(){
    cout<<"podaj ile masz lat:";
    cin>>data;

    if(data<18){
        cout<<"jesteś neletni";
    } else if ((data>=18)&&(data<35)){
        cout<<"jestes pełoletni ale nie mozesz kandydować";
    } else{
        cout<<"jestes pełonoetni i możesz kandydować";
    }

    return 0;

}