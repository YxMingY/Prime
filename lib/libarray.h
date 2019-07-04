//
// Created by xMing on 2019/7/4.
//

#ifndef XMING_LIBARRAY_H
#define XMING_LIBARRAY_H

#include <string>
#include <cctype>
#include <list>
#include <iostream>
using std::string;
using std::list;
using std::cout;
using std::endl;

namespace xming
{
  void print_r(list<string> l)
  {
    cout<<"list("<<l.size()<<")["<<endl;
    list<string>::iterator i = l.begin();
    while (i != l.end()) {
      cout<<"  "<<*i++<<endl;
    }
    cout<<"]"<<endl;
  }
}

#endif //XMING_LIBARRAY_H
