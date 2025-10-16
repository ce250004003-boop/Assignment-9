#include <iostream>
#include <string>
using namespace std;
struct SalesRecord {
    string month;
    float amount;
};
int main(){
  SalesRecord array[12];
  int max=-1,min=90000000;
  string maxmonth, minmonth;
  string months[12] = {"January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
  for(int i=0 ; i<12 ; i++){
    float a;
    cout<<"For month "<<months[i]<<", Enter the sales amount."<<endl;
    cin>>a;
    array[i] = {months[i],a};
  }
  for(int i=0 ; i<12 ; i++){
    if(max<=array[i].amount){
      max=array[i].amount;
      maxmonth=array[i].month;
    }
    if(min>=array[i].amount){
      min=array[i].amount;
      minmonth=array[i].month;
    }
  }
  cout<<"Month with highest sales is "<<maxmonth<<" with sales "<<max<<endl;
  cout<<"Month with lowest sales is "<<minmonth<<" with sales "<<min<<endl;
  return 0;
}
