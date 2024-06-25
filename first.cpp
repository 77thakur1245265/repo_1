#include<iostream>
using namespace std;
int main(){
    int n=5;
    (n%2==0)? cout<<"even"<<endl : cout<<"odd"<<endl;

    char ch;
    cout << "Enter: "<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
        switch (ch)
    {
    case 'a' : cout<<"vowel"<<endl;
        break;
    case 'e' : cout<<"vowel"<<endl;
        break;
    case 'i' : cout<<"vowel"<<endl;
        break;
    case 'o' : cout<<"vowel"<<endl;
        break;
    case 'u' : cout<<"vowel"<<endl;
        break;
    case 'A' : cout<<"vowel"<<endl;
        break;
    case 'E' : cout<<"vowel"<<endl;
        break;
    case 'I' : cout<<"vowel"<<endl;
        break;
    case 'O' : cout<<"vowel"<<endl;
        break;
    case 'U' : cout<<"vowel"<<endl;
        break;
    default:
    cout<<"consonent";
        break;
    }
    }else{
        cout<<"ERROR"<<endl;cout<<"Enter an alphabet"<<endl;
    }
}