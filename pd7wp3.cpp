// #include<iostream>
// using namespace std;
// char diamond1(int rows);
// char diamond2(int rows);
// main(){
// int rows;
// cout << "Enter numbe rof rows:";
// cin >> rows;
// char answer=diamond1(rows);
// cout << answer;
// char answer2=diamond2(rows);
// cout << answer2;
// }
// char diamond1(int rows){
//     for(int rowsize=1;rowsize<=rows;rowsize++){
//         for(int space=rows;space<=rows;space--){
//             cout << " ";
//         }
//         for(int star=1;star<=rows;star++){
//             cout << "*";
//         }
//         cout << endl;
//     }
    
// }
#include<iostream>
using namespace std;
char diamond1(int rows);
// char diamond2(int rows);
main(){
int rows;
cout << "Enter numbe rof rows:";
cin >> rows;
char answer=diamond1(rows);
cout << answer;
// char answer2=diamond2(rows);
// cout << answer2;
}
char diamond1(int rows){
    for(;rows>=1;rows--){
        for(int space=1;space<=rows;space++){
            cout << " ";
        }
        for(int star=1;star<=rows;star++){
            cout << "*";
        }
        cout << endl;
    }
    
}