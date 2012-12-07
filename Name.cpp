#include <fstream>
#include <iostream>
#include <string>

#include "Name.h"

using std::string;

Name::Name() {
  names = new string[10000];
}

Name::~Name() {
  delete[] names;
}

void Name::countsOfNames(fstream &NaughtyOrNice) {
  NaughtyOrNice.open("NaughtyOrNice", ios::in);

  string person;

  for(int i = 0; i <= 10000; ++i) {
    getline("NaughtyOrNice", person);
    person = names[i];
  }

}
