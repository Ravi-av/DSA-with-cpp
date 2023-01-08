#include<iostream>
using namespace std;

int main(){
char ch;


cout<< "enter any character" <<endl;
cin>> ch;
if(ch>=65 || ch<=90){
    cout<<"this is upper case"<<endl;
}
else if(ch>=97 || ch<=122){
    cout<<"this is small case " <<endl;
}

else{
    cout<<"this is numeric "<<endl;
}

}
   