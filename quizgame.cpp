#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{

int score = 0;
int k = rand() % 5; int l= rand() % 5; int m= rand() % 5; int n = rand() % 5; int o = rand() % 5;
  int a;
 string qa, aa, qb, ab, qc, ac, qd, ad, qe, ae;
  

cout << "Enter Question 1: " << endl;
getline(cin, qa);
cout << "Enter Answer 1: " << endl;
getline(cin, aa);
cout << "Enter Question 2: " << endl;
getline(cin, qb);
cout << "Enter Answer 2: " << endl;
  getline(cin, ab);
cout << "Enter Question 3: " << endl;
getline(cin, qc);
cout << "Enter Answer 3: " << endl;
getline(cin, ac);
cout << "Enter Question 4: " << endl;
getline(cin, qd);
cout << "Enter Answer 4: " << endl;
getline(cin, ad);
  cout << "Enter Question 5: " << endl;
getline(cin, qe);
cout << "Enter Answer 5: " << endl;
getline(cin, ae);
  
  string  ansarray[] = { aa, ab, ac, ad, ae};
 
cout << " " << qa << "?" << endl;
cout << "Is this the answer?" << endl;
  cout << ansarray[k] << endl;
cout << " 1 = Yes & 2 = No : " << endl;
cin >> a;

if( a == 1 && k == 0 ){
score++;
  cout << "Correct!" << endl;
}
  
  else if( a == 2 && k != 0){
    score++;
    cout << "Correct" << endl;
  }

else{
cout << "Incorrect" << endl;
}
  
  cout << " " << qb << "?" << endl;
cout << "Is this the answer?" << endl;
  cout << ansarray[l] << endl;
cout << " 1 = Yes & 2 = No : " << endl;
cin >> a;

if( a == 1 && l == 1){
score++;
  cout << "Correct!" << endl;
}
  
  else if( a == 2 && l != 1){
    score++;
    cout << "Correct" << endl;
  }

else{
cout << "Incorrect" << endl;
}
  
  cout << " " << qc << "?" << endl;
cout << "Is this the answer?" << endl;
  cout << ansarray[m] << endl;
cout << " 1 = Yes & 2 = No : " << endl;
cin >> a;

if( a == 1 && m == 2 ){
score++;
  cout << "Correct!" << endl;
}
  
  else if( a == 2 && m != 2){
    score++;
    cout << "Correct" << endl;
  }

else{
cout << "Incorrect" << endl;
}
  cout << " " << qd << "?" << endl;
cout << "Is this the answer?" << endl;
  cout << ansarray[n] << endl;
cout << " 1 = Yes & 2 = No : " << endl;
cin >> a;

if( a == 1 && n == 3 ){
score++;
  cout << "Correct!" << endl;
}
  
  else if( a == 2 && n != 3){
    score++;
    cout << "Correct" << endl;
  }

else{
cout << "Incorrect" << endl;
}
  
  cout << " " << qe << "?" << endl;
cout << "Is this the answer?" << endl;
  cout << ansarray[o] << endl;
cout << " 1 = Yes & 2 = No : " << endl;
cin >> a;

if( a == 1 && o == 4 ){
score++;
  cout << "Correct!" << endl;
}
  
  else if( a == 2 && o != 4){
    score++;
    cout << "Correct" << endl;
  }

else{
cout << "Incorrect" << endl;
}
  cout << "Score: " << score << "/5" << endl;
return 0;
}
# CSCI155 quizgame
