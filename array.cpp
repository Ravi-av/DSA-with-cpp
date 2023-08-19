#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  cout << "printing the array " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "printing done " << endl;
}
int main()
{

  int number[25];
  // acceing a array
  cout << "value at 14index " << number[14] << endl;
  // initialsing an array
  int second[3] = {5, 7, 11};
  // accesing an element
  cout << "value at 2 index " << second[2] << endl;

  int third[15] = {2, 7};
  int n = 15;
  printArray(third, 15);
  // printing the array

  // initialisation with 0
  int fifth[10];
  n = 10;
  int fifthsize = sizeof(fifth) / sizeof(int);
  cout<< "size of fifth is " << fifthsize << endl;

  char ch[5] = {'a', 'b', 'c', 'r', 'p'};
  cout<< ch[3]<< endl;
  cout<<"printing the array ";

  for (int i = 0; i<5; i++)
  {
    cout<<ch[i]<<" ";
  }
  

  cout<< endl<<"Everything is fine" << endl<<endl;

  return 0;
}