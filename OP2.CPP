#include<iostream>
using namespace std;
void diamond(int rowsize);
void diamond2(int rowsize);
main(){
    int rowsize;
    cout << "Enter no. of rows:";
    cin >> rowsize;
    diamond(rowsize);
    diamond2(rowsize);
}
void diamond(int rowsize){
    for(int rows=1;rows<=rowsize;rows++){
        for(int space=rowsize;space>=rows;space--){
            cout << " ";
        }
        for(int col=1;col<=rows;col++){
            cout << "*";
        }
        
        cout << endl;
    }

}
void diamond2(int rowsize){

    for(int rows2=1;rows2<=rowsize;rows2++){
        for(int space=1;space<=rows2;space++){
            cout << " ";
        }
        for(int star=rowsize;star>=rows2;star--){
            cout << "*";
        }
        cout << endl;
    }
}
