#include<iostream>
using namespace std;

void printArray(int arr[],int size){
     cout<<"printing the array "<<endl;
    for( int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"printing done "<<endl;
}
int main()
{


    int number[25];
    //acceing a array 
    cout<<"value at 14index "<<number[14]<<endl;
    //initialsing an array 
    int second[3] ={5,7,11};
    //accesing an element
    cout<<"value at 2 index "<<second[2]<<endl;
    
    int third[15] = {2,7};
    int n =15;
   printArray(third,15);
    //printing the array 
    
    //initialisation with 0
    int fourth[10]={0};
     n=10;
   printArray(fourth,10);
     int fivth[10]={1};
     n=10;
   printArray(fivth,10);
    cout<<"Everything is fine"<<endl<<endl;
    
    
 return 0;
}