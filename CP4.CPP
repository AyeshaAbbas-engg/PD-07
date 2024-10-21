#include<iostream>
using namespace std;
int dots(int num);
main(){
    int num;
    cout << "Enter a number of triangle:";
    cin >> num;
    int answer=dots(num);
    cout <<"No. of dots are:" << answer;
    
}
int dots(int num){
    int sum=0;
    sum=(((num)*(num+1))/2);
    return sum;
}