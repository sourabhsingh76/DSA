#include<iostream>
using namespace std;

int main(){                           // use of else if condition
    char button;
    cin>>button;
    if(button=='a'){
        cout<<"hello"<<endl;
    }
    else if(button=='b'){
        cout<<"namaste"<<endl;
    }
    else if(button=='c'){
        cout<<"salut"<<endl;
    }
    else if(button=='d'){
        cout<<"hola"<<endl;
    }
    else if(button=='e'){
        cout<<"ciao"<<endl;
    }
    else{
        cout<<"i am still learning more"<<endl;
    }
    return 0;
}