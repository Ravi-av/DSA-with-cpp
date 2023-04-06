#include <iostream>
using namespace std;

int main()
{
    int amount = 1330;
    int note100 = 0, note20 = 0, note10 = 0;

switch(note100){
    case 1:
    note100 = amount/100;
    amount= amount%100;
    break;
}

    switch(note20){
        case 2:
    note20 = amount/20;
    amount= amount%20;
    break;
    }
    switch(note10){
    case 3:
    note10 = amount/10;
    break;
    }
  


cout<<"number of 100rs note is "<<note100<<endl;
cout<<"number of 20rs note is "<<note20<<endl;
cout<<"number of 10 rs note is "<<note10<<endl;
return 0;
    
}


