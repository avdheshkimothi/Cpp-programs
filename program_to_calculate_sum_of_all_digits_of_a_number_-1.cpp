// this cpp program is to calculate sum of digits of a number given by user usign while loop and if condition 
#include <iostream>
using namespace std;
int main(){
    int number;
     cout<<"ENTER THE NUMBER";
     cin>>number;
     int sum_of_num=0;
     int y;
     // if number will be 0 it will print sum=0 at console
     if(number==0){
        cout<<"0";
        exit(1);
     }
     // logic of finding sum 
    while(number!=0){
        y=number%10;
        sum_of_num+=y;
        number/=10;

        

    }
    cout<<sum_of_num;
    return 0;
}
