#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
ofstream outputFile;
outputFile.open("crate.txt");
const double COST_PER_CUBIC_FOOT = .23;
const double CHARGE_PER_CUBIC_FOOT = .5;

double length, width, height, volume, cost, charge, profit;

cout << "Enter Dimensions of the crate (in feet):" << endl;
cout << "Length: ";
cin >> length;
cout << "Width: ";
cin >> width;
cout << "Height: ";
cin >> height;
  
  cout << setprecision(2) << fixed << showpoint; 

volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;
profit = charge - cost;

cout << "The volume of the crate is ";
cout << volume << " cubic feet." << endl;
cout << "Cost to build: $" << cost << endl;
cout << "Charge to customer: $" << charge << endl;
cout << "Profit: $" << profit << endl;
outputFile << "volume: " << volume << " cost: " << cost << " charge: " << charge << " profit: " << profit << endl;
outputFile.close();
cout << "Data written to crate.txt\n";
return 0;


}

#CSCI155 cratefile
