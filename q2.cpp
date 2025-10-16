#include <iostream>
#include <string>
using namespace std;
struct Color {
    int red;
    int green;
    int blue;
};
int main(){
  Color array[5];
  array[0] = {160,32,255};
  array[1] = {0,192,0};
  array[2] = {255,208,160};
  array[3] = {96,255,128};
  array[4] = {0,0,0};
  cout<<"Values before modification: "<<endl;
  for(int i=0 ; i<5 ; i++){
    cout<<"Color "<<i+1<<" : "<<array[i].red<<" , "<<array[i].green<<" , "<<array[i].blue<<endl;
  }
  for(int i=0 ; i<3 ; i++){
    array[i].red = 255 - array[i].red; 
    array[i].blue = 255 - array[i].blue;
    array[i].green = 255 - array[i].green;
  }
  cout<<"After modification: "<<endl;
  for(int i=0 ; i<5 ; i++){
    cout<<"Color "<<i+1<<" : "<<array[i].red<<" , "<<array[i].green<<" , "<<array[i].blue<<endl;
  }
  return 0;
}
