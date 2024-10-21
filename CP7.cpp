#include<iostream>
using namespace std;
string hospital(int num);
main(){
    int num;
    cout << "Enter the number of days who visited Hospital:";
    cin >> num;
    string ans= hospital(num);
    cout << ans;
}
string hospital(int num){
    int check=0;
    string answer=" ";
    int treated=0,untreated=0, store=0,store2=0;
    for(int x=1;x<=num;x++){
        cout << "number of patients who visited hospital on Day "<< x <<":";
        cin >>check;
        if(check<=7){
            treated=check;
            store+=treated;
            untreated=0;
            store2=untreated;

        
        }
        else if(check>7){
            store2+=check-7;
          store+=7;
         if(x%3==0 && store2>store){
            
            store++;
            store2--;
        }
         }
        
        


    }
    answer = "Treated patients:" + to_string(store) + "\n";
    answer += "Untreated Patients:" + to_string(store2) + "\n";

    return answer;
    
}
// #include<iostream>
// using namespace std;
// string hospital(int num);
// main(){
//     int num;
//     cout << "Enter the number of days who visited Hospital:";
//     cin >> num;
//     string ans= hospital(num);
//     cout << ans;
// }
// string hospital(int num){
//     int check=0;
//     string answer=" ";
//     int treated=0,untreated=0, store=0,store2=0;
//     for(int x=1;x<=num;x++){
//         cout << "number of patients who visited hospital on Day "<< x <<":";
//         cin >>check;
//         if(check<=7){
//             treated=check;
//             store+=treated;
//             untreated=0;
//             store2=untreated;

        
//         }
//         else if(check>7){
//             store2+=check-7;
//           store+=7;
//          if(x%3==0 && store2>store){
            
//             store++;
//             store2--;
//         }
//          }

//     }
//     answer = "Treated patients:" + to_string(store) + "\n";
//     answer += "Untreated Patients:" + to_string(store2) + "\n";

//     return answer;
    
// }

// #include <iostream>
// using namespace std;
// void hospital(int n1)
// {
//     int doc = 7;
//     int treated = 0; 
//     int untreated = 0;
//     int n2;
//     for (int a = 1; a <= n1; a++)
//     {
//         cout << "Number of patients who visited hospital on Day "<<a <<" : ";
//         cin >> n2;
//         if (a % 3 == 0)
//         {
//             if (untreated > treated)
//             {
//                 doc +=1;
//             }
//         }
//         if (n2 <= doc)
//         {
//             treated = treated + n2;
//         }
//         else
//         {
//             treated= treated + doc;
//             untreated = untreated+(n2 - doc) ;
//         }
//     }
//     cout << "Treated Patients: " << treated <<"\n"; 
//     cout << "Untreated Patients: " << untreated;
    
// }

// main()
// {
//     int n1 = 0, n2 = 0;
//     cout << "Enter Number of days you visited Hospital: ";
//     cin >> n1;
//     hospital(n1);
// }