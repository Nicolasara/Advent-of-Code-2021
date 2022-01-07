#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {
  vector<int> input;
  string line;
  ifstream file ("input.txt");
  if (file.is_open())
  {
    while ( getline (file,line) )
    {
      input.push_back(stoi(line));
    }
    file.close();
  }

  int count = 0;
  int len = input.size();
  for (int i = 1; i < len; i++) {
    if (input.at(i-1) < input.at(i)) {
      count++;
    }
  }
  cout << count << "\n";
  
  count = 0;
  for (int i = 3; i < len; i++) {
    if (input.at(i-3) < input.at(i)) {
      count += 1;
    }
  }
  cout << count << "\n";
  return 0;
}
