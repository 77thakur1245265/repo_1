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
// #include<iostream>
// using namespace std;
// char reverse(string f){
//     char temp;
//     int n;
//     n=sizeof(f);
//     for(int i=0;i<n;i++){
//         temp = f[i];
//         f[i]=f[n-i-1];
//         f[n-1-i]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<f[i];
//     }
// }
// int main(){
//     string s;
//     string *p;
//     cout<<"Start : ";
//     getline(cin,s);
//     reverse(s);

// }

// #include<iostream>
// #include<string>
// #include<algorithm> 
// using namespace std;
// int main(){
//     string s1="hello";
//     string s2="bye";
//     int a=432;
//     reverse(s1.begin(),s1.end());
//     cout<<s1.length()<<endl;
//     cout<<s1.substr(4,7)<<endl;
//     cout<<s1<<endl;
//     string str =to_string(a);
//     str=str+"1";
//     cout<<str<<endl;
//     cout<<a;
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v1;
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(1);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(2);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(3);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(5);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(10);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(3);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(3);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(3);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(3);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     v1.push_back(3);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

    
//     v1.push_back(1);
//     cout<<"size is : "<<v1.size()<<endl;
//     cout<<"capacity is : "<<v1.capacity()<<endl;

//     cout<<v1[11];
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v1;
//     v1.push_back(1);
//     cout<<v1.capacity()<<endl;

//     v1.push_back(7);
//     cout<<v1.capacity()<<endl;

//     v1.push_back(1);
//     cout<<v1.capacity()<<endl;

//     v1.push_back(1);
//     cout<<v1.capacity()<<endl;

// }

// #include<iostream>
// using namespace std;
// bool cube(int a){
//     int c;
//     for(int i=1;i<=a/2;i++){
//         c=i*i*i;
//         if(c==a){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[10]={2,4,7,9,8,16,64,49,5,10};
//     cout<<"Start: ";
//     int count=0;
//     for(int i=0;i<sizeof(arr);i++){
//         if(cube(arr[i])){
//             cout<<arr[i]<<endl;
//             count++;
//         }
//     }
//     cout<<"Total no. of perfect cube numbers: "<<count;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Start: ";
//     cin>>n;
//     int a,b=0,c;
//     while(n!=0){
//         a=n%10;
//         n=n/10;
//         b=b+a;
//     }
//     cout<<char(96+b);
// }

// #include<bits/stdc++.h>
// using namespace std;

// int square(int a){
//     return a*a;
// }
// int main(){
    
//     for(int i=1;i<=5;i++){
//         cout<<square(i)<<"\n";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// double circle(int r){
//     float area=3.143*r*r,circumference=2*3.143*r;
//     cout<<"Area is : "<<area<<endl;
//     cout<<"circumference is : "<<circumference; 
//     return 0;

// }
// int main(){
//     int radius=3;
//     circle(radius);
// }

// #include<iostream>
// using namespace std;

//----------------------------------****************************************************************-----------------------------------

#include<bits/stdc++.h>          
using namespace std;




int largest(int a,int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}

int smallest(int a,int b){
    if(a<=b){
        return a;
    }else{
        return b;
    }
}

// int odd_between(int a,int b){
//     for (int i = smallest(a,b); i < largest(a,b); i++)
//     {
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
    
// }

// int main(){
//     int a,b;
//     cout<<"Start: ";
//     cin>>a;
//     cin>>b;
//     odd_between(a,b);
// }

bool prime(int n){
    int check;
    if(n==1)return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i!=0){
            check = 1;
        }else if(n%i==0){
            return 0;
        }
    }
    if(check==1){
        return 1;
    }
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Start: ";
//     cin>>a;
//     cin>>b;
//     for(int i=smallest(a,b);i<largest(a,b);i++)
//     {
//         if(prime(i)){
//         cout<<i<<" is prime"<<endl;}
//     // }else{
//     //     cout<<i<<" is non prime"<<endl;
//     // }
//     }
// }


int sqrt(int n){
    int a=n;
    for(int i=2;i<=n/2;i++)
    {
        int k=i*i;
        if(k==a){
            return i;
        }
    }
    return 0;
}
// int main(){
//     int m=36,c;
//     c=sqrt(m);
//     if(c>0){
//         cout<<"Yes "<<m<<" has a perfect square root = "<<c;
//     }else{
//         cout<<"No "<<m<<" has no perfect square root";
//     }
// }

// int main(){
//     for(int i=1;i<=4;i++){
//         for(int k=i;k<=4;k++){
//             cout<<" ";
//         }
//         for(int k=i;k>=1;k--){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int r=5,c=9;int a,b;
//     for(int i=0;i<r;i++){
//         for(int k=1;k<=c;k++){
//             if(k==(r-i) || k==(r+i)){
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     vector<int> s ;
//     int element;
//     for(int i=0;i<=5;i++){
//         cin>>element;
//         s.push_back(element);
//     }
//     for(int i=0;i<=5;i++){
//         cout<<s[i]<<" ";
//     }
//     cout<<endl;
//     for(int kuc:s){
//         cout<<kuc<<" ";
//     }
// }

// int main(){
//     vector<int> n;
//     int x;
//     for(int i=0;i<7;i++){
//         int element;
//         cin>>element;
//         n.push_back(element);
//     }
//     // cout<<"OCCURENCE: ";
//     // cin>>x;
//     x=0;
//     int c,count=0,check=0;
//     for(int i=0;i<6;i++){
//         if(n[i+1]>=n[i]){
//             check=1;
//         }else{
//             check=0;
//             break;
//         }
//     }
//     if(check==1){
//         cout<<"yes its is sorted";
//     }else if(check==0){
//         cout<<"not its is not sorted";
//     }
// }

int factorial(int a){
    if(a==0) return 1;
    return a*factorial(a-1);
}

int main(){
    vector<vector<int>> v(5,vector<int>(3));
    
}