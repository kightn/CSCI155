#include <iostream>

using namespace std;
 
int main() { 
double atime, btime, ctime, dtime, mps, total, place, mph;

cout << "Time (seconds) at end of first lap? ";
cin >> atime;
cout << "Time (seconds) at end of second lap? ";
cin >> btime;
cout << "Time (seconds) at end of third lap? ";
cin >> ctime;
cout << "Time (seconds) at end of fourth lap? ";
cin >> dtime;

mps = (atime + (btime - atime) + (ctime - btime) + (dtime - ctime) / 10);
  total = (mps / 50) ;
  mph = (total * 60) * 60;

cout << "Estimated total time: " << total << " hours" << endl;
  
  if( mph >= 225.5){
    cout << "Estimated Placement: Top 5" << endl;
  }
  
 else if ( mph < 225.5 && mph >= 225){
    cout << "Estimated Placement: 6th - 10th" << endl;
  }
  
 else if ( mph < 225 && mph >= 224.6){
    cout << "Estimated Placement: 11th - 15th" << endl;
  }
  
  else if ( mph < 224.6 && mph >= 223.75){
    cout << "Estimated Placement: 16th - 20th" << endl;
  }
  else if (mph < 223.75 && mph >= 0){
     cout << "Estimated Placement: 21st or lower" << endl;
   }

}