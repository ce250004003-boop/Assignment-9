#include <iostream>
#include <string>
using namespace std;
struct Item {
    int id;
    float cost;
};
int main(){
  Item array[6];
  array[0] = {250001000 , 48.00};
  array[1] = {250001001 , 51.00};
  array[2] = {250001002 , 58.00};
  array[3] = {250001003 , 36.00}; 
  for(int i=0 ; i<2 ; i++){
    int ID;
    float price;
    cout<<"Please enter id of item no. "<<i+5<<endl;
    cin>>ID;
    cout<<"Please enter cost of item no. "<<i+5<<endl;
    cin>>price;
    array[i+4] = {ID,price};
  }
  for(int i=0 ; i<6 ; i++){
    if(array[i].cost>50){
      cout<<"Item no. "<<i+1;
      cout<<" ID "<<array[i].id<<" Cost "<<array[i].cost<<endl;
    }
  }
  return 0;
}
