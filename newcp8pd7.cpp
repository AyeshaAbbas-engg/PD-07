#include<iostream>
using namespace std;
#include<iomanip>
void Cargo(int num);
main(){
    int num;
    cout << "Enter the count of cargo :";
    cin >> num;
    Cargo(num);

    
}
void Cargo(int num){

    float val=0.0,storeval=0.0,storeeval=0.0,storeval2=0.0,storeeval2=0.0,storeval3=0.0,storeeval3=0.0;
    
    int calc1=0,calc2=0,calc3=0,sum=0;
    
    for(int x=1;x<=num;x++){
        cout << "Enter the tonnage of Cargo "<< x << ":";
        cin >>val;
        sum=sum+val;
        if(val<=3){

           storeeval=storeeval+val;
           
        }
        else if(val>3 && val<=11){
           
           storeeval2+=val;
            
        }
        else if(val>11){
           
           storeeval3+=val;
            
        }


    }
    cout << ((storeeval*200)+(storeeval2*175)+(storeeval3*120))/sum << endl;
    storeeval=storeeval/sum;
    storeeval=storeeval*100;
    storeeval2=storeeval2/sum;
    storeeval2=storeeval2*100;
    storeeval3=storeeval3/sum;
    storeeval3=storeeval3*100;
    cout << fixed << setprecision(2);
    cout<<storeeval<<"%"<< endl;
    cout<<storeeval2<< "%"<< endl;
    cout<<storeeval3<<"%" << endl;


}