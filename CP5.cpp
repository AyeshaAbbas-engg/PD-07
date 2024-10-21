// #include<iostream>
// using namespace std;
// bool isPrime(int num);
// main(){
//     int num;
//     cout << "Enter a number to check it is prime or not:";
//     cin >> num;
//     bool answer= isPrime(num);
//     cout << answer;
// }
// bool isPrime(int num){
//     bool ans=0;
//     if(num==1){
//         ans=0;
//     }
//     else if(num==2){
//         ans=1;
//     }
//     for(int x=2;x<num;x++){
//         if(num%x==0){
//             ans= 0;
//             return ans;
//         }
//         else{
//             ans=1;
//         }

//     }
//     return ans;
// }
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter how many prime numbers' product you want: ";
    cin >> num;

    int product = 1;  
    int count = 0;    
    int i = 2;        

    while(count < num) { 
        bool isPrime = true;
        
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            product *= i;
            count++;
        }

        i++;  
    }

    cout << "The product of the first " << num << " prime numbers is: " << product << endl;
}