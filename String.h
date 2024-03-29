#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <fstream>
using namespace std;

class String
{
  friend int operator==(char*,const String&);
  friend int operator==(const String&,const String&);
  friend int operator==(const String&,char*);
  friend ostream& operator<<(ostream&,String&);
  friend istream& operator>>(istream&,String&);
public:
  //  constructors and destructor
  String() : len(0), theChars(NULL) { }
  String(char *);
  String(String&);
  ~String();
  //  accessors
  int length() const { return len; }
  int at(int, char&) const;
  int find(char) const;
  int substring(String&,int,int) const;
  String operator+(const String&) const;
  //  mutators
  String& operator=(const String&);
private:
  char *theChars;
  int len;
};

#endif

