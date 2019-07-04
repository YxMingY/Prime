//
// Created by user on 2019/6/27.
//

#ifndef XMING_LIBSTRING_H
#define XMING_LIBSTRING_H

#include <string>
#include <cctype>
#include <list>
//#include <iostream>
using std::string;
using std::list;

namespace xming
{

  string strtolower(string str)
  {
    for (char &c : str) {
      c = tolower(c);
    }
    return str;
  }

  string strtoupper(string str)
  {
    for (char &c : str) {
      c = toupper(c);
    }
    return str;
  }

  list<char> str_split(string str)
  {
    list<char> l;
    for (char c : str) {
      l.push_back(c);
    }
    return l;
  }

  list<string> str_split(string str,int length)
  {
    list<string> l;
    string string_pair("");
    for (int i = 0; i < str.size(); ++i) {
      string_pair += str[i];
      if (i%length == 1) {
        l.push_back(string_pair);
        string_pair.clear();
      }
    }
    return l;
  }

  string ltrim(string str)
  {
    int i = 0;
    while ((int)str[i++]<=32);
    return str.substr(i-1);
  }

  string rtrim(string str)
  {
    int i = str.size();
    while ((int)str[--i]<=32);
    return str.substr(0,i+1);
  }

  string trim(string str)
  {
    return (rtrim(ltrim(str)));
  }

  list<string> explode(string delimiter,string str)
  {
    unsigned long size = delimiter.size();
    int n;
    list<string> l;
    if (str.empty()) return l;
    do {
      n = str.find(delimiter);
      l.push_back(str.substr(0,n));
      str = str.substr(n+size);
    } while (n != string::npos);
    return  l;
  }

  string implode(string delimiter,list<string> l)
  {
    string str("");
    if (l.empty()) return str;
    list<string>::iterator i = l.begin();
    while (i != --l.end()) {
      str += *i++ += delimiter;
    }
    str += *i;
    return str;
  }
}

#endif //XMING_LIBSTRING_H
