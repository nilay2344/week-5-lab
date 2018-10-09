#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main() {

ofstream myfile;
myfile.open ("week5.txt");
myfile << "Triangle has 3 sides that are 6cm, 7cm and 9.21cm \n ";
myfile.close();




  int  a=6,b=7;
  auto x = sqrt (pow(a,2) + pow(b,2));

cout <<"the square of width=" << pow(a,2) << endl; 
cout <<"the square of heigth="<< pow(b,2) << endl;
cout <<"the length of ther side=" << sqrt (pow(a,2) + pow(b,2)) << endl;
 




return 0;



}