/*#include<iostream>
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
}*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"START: ";
//     cin>>n;
//     if(n>=0){
//         cout<<"Below Required Views";
//     }else if(n>=30 && n<=50){
//         cout<<"Average";
//     }else if(n>50 && n<=60){
//         cout<<"good";
//     }else if(n>60 ){
//         cout<<"excelent";
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,a,b,c,sum=0,e;
//     cout<<"START: ";
//     cin>>n;
//     cin>>e;
//     while(n!=0){
//         a=n%10;
//         n=n/10;
//         if(a!=e){
//             sum++;
//         }
//     }
//     cout<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,p,a,check=0,sum=0;
//     cout<<"START: ";
//     cin>>n;
//     while(n!=0){
//        a=n%10;
//        n=n/10;
//        for(int i=1;i<=a;i++){
//         if(a%i==0){
//             check++;
//         }
//     }if(check>2){
//         sum = sum+a;
//     }check=0;
//     }cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr_1[4],arr_2[4];
//     int sum=0;
//     cout<<"Enter Value in A ";
//     for(int i=0;i<3;i++){
//         cin>>arr_1[i];
//     }
//     cout<<"Enter Value in B ";
//     for(int i=0;i<3;i++){
//         cin>>arr_2[i];
//     }
//     for(int i=0;i<3;i++){
//         for(int k=0;k<3;k++){
//             if(i==k){
//                 sum = arr_1[i]+arr_2[k];
//                 cout<<sum<<endl;
//                 sum=0;
//             }
//         }
//     }
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     string k;
//     cout<<"Start: ";
//     getline(cin,k);
//     for(int i=0;i<sizeof(k);i++){
//         if(i==0){
//             cout<<k[i];
//             cout<<" ";
//         }else if(k[i]==' '){
//             cout<<k[i+1];
//             cout<<" ";
//         }
//     }
// }
#include<iostream>
using namespace std;
char reverse(string f){
    char temp;
    int n;
    n=sizeof(f);
    for(int i=0;i<n;i++){
        temp = f[i];
        f[i]=f[n-i-1];
        f[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<f[i];
    }
}
int main(){
    string s;
    string *p;
    cout<<"Start : ";
    getline(cin,s);
    reverse(s);

}