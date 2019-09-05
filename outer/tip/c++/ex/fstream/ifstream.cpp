#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
  ifstream infile("myfile");
  string data;
  if(!infile)
    {
      cout << "error opening file" << endl;
      exit(0);
    }

  while(!infile.eof())
    {
      infile >> data;
      cout << data << endl;
    }
}
