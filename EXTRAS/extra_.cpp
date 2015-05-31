#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

struct Person
{
  char name[50];
  int age;
  char phone[24];
};

int main()
{
  Person me = {"Robert", 28, "364-2534"};
  Person book[30];
  int x = 123;
  double fx = 34.54;
  ofstream outfile;
  outfile.open("junk.dat", ios::binary | ios::out);
  outfile.write((char*)&x, sizeof(int)); // sizeof can take a type
  outfile.write((char*)&fx, sizeof(double)); // or it can take a variable name
  outfile.write((char*)&me, sizeof(me));
  outfile.write((char*)book, 30*sizeof(Person));
  outfile.close();
  
  int y;
  double b;
  Person c;
  
  ifstream ifs;
  ifs.open("junk.dat", ios::binary);
  ifs.read((char*)&y,sizeof(int));
  ifs.read((char*)&y,sizeof(int));
  
  cout << y << endl;
  
  
  ifs.close();
}
