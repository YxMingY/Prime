#include <iostream>
#include "lib/libstring.h"
#include "lib/libarray.h"

using namespace std;
using namespace xming;
int main()
{
  string str("1a:2dd:3b:6c6");
  print_r(explode(":",str));
  cout<<implode("|",explode(":",str));
}