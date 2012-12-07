#ifndef __NAME_H__
#define __NAME_H__

#include <string>
#include <fstream>

using namespace std;

class Name {
 private:
  string* names;
  int threshold;

 public:
  Name();
  ~Name();
  void countsOfNames(fstream &NaughtyOrNice);
};

#endif
