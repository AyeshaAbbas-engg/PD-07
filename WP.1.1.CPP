#include<iostream>
using namespace std;
void shape(int num);

main(){
    int num;
    cout << "Enter the number of rows :";
    cin >> num;
    shape(num);
}
void shape(int num){
    for(int x=0;x<=num;x++){
        for(int y=0;y<=x;y++){
            cout << "*";
        }
        cout << endl;
    }

}