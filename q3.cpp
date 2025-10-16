#include <iostream>
#include <string>
using namespace std;
struct Point {
    float x;
    float y;
};
int main(){
  Point array[7];
  for(int i=0 ; i<7 ; i++){
    float X,Y;
    cout<<"Enter x coordinate of point no. "<<i+1<<" (e.g. if the point is (-43,76) enter '-43')"<<endl;
    cin>>X;
    cout<<"Enter y coordinate of point no. "<<i+1<<" (e.g. if the point is (-43,76) enter '76')"<<endl;
    cin>>Y;
    array[i] = {X,Y};
  }
  for(int i=0 ; i<7 ; i++){
    if(array[i].x>0 && array[i].y>0){
      cout<<"Point("<<array[i].x<<","<<array[i].y<<") lies in the first quadrant"<<endl;
    }
  }
  return 0;
}
