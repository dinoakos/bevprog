#include "std_lib_facilities.h"
int main() {
  double min = 0.0;
  double max = 0.0;
  double cmToM=100;
  double current;
  double cmToInch=2.54;
  double inchToFeet=12;
  string unit="";
  double sum=0;
  vector<double> values={};


while(true){
  cin >> current>>unit;
  cout << current << unit;
  /*if (unit!="cm"||unit!="m"||unit!="in"||unit!="ft") {
    current=0;
    cout << "Illegal expression detected, opinion rejected";
  }else{

    if (unit=="cm") {
      current/=cmToM;
    }
    if (unit=="in") {
      current/=cmToM;
    }
    if (unit=="ft") {
      current/=cmToM;
    }
  }
  values.push_back(current);
  sum+=current;
  if (current>max) {
    max= current;
    cout << max << "is the largest number so far";
  } else if(current<min&&current!=0){
    min= current;
    cout << min << "is the smallest number so far";
  }

  }
  cout << "The largest number was "<< max << "in meters"<<'\n';
  cout << "The smallest number was "<< max << "in meters" << '\n';
  cout << "the number of values was " << values.size();
  cout << "the sum of the values in meters was " << sum;
  sort(values.begin(),values.end());
  for (int i = 0; i < values.size(); i++) {
    cout << values[i];
  }*/
return 0;
}
