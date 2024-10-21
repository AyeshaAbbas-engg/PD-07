#include<iostream>
using namespace std;
void amplify(int num);
main(){
    int num;
    cout << "Enter a number to Amplify:";
    cin >> num;
    amplify(num);
}
void amplify(int num){
    
    for(int x=1;x<=num;x++){
        if(x%4==0){
           int a= x*10;
           cout << a << endl;
           continue;
           
        }    
        cout << x << endl;
    }
}