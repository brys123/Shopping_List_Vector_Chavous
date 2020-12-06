//Bryslin Chavous
//Programming C++ II
//11/29/2020
//Dr. Tyson McMillan - TCCD
//Shopping list using vector
//I understand vectors and how to add strings and output the results

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> shopping_list;
  shopping_list.push_back("pizza****");
  shopping_list.push_back("soda");
  shopping_list.push_back("cookies");
  shopping_list.push_back("ice cream");
  shopping_list.push_back("chicken");

  cout << "SHOPPING_LIST 1.0\n" << endl;

  for(int i = 0; i < shopping_list.size(); i++)
  cout << shopping_list[i] <<  endl; 
  cout << "\nEND";

}