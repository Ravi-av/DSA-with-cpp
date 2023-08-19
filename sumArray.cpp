#include<iostream>
using namespace std;
int getSum(int num[],int size){
    int sum=0;
    for (int i = 0; i <=size; i++)
    {
    sum=sum+num[i];
    }
    return sum;


}
int main()
{ 
int num[5];
int size;
cin>>size; 

for(int i=0; i<=size; i++)
{
    cin>>num[i];
 
    
}

cout<<"the sum of array is "<<getSum(num,size)<<endl;

 return 0;
}