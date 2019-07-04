#include <iostream>
#include "libstring.h"
#include "libarray.h"

using namespace std;
using namespace xming;
int main()
{
  string str("1a:2dd:3b:6c6");
  print_r(explode(":",str));
  cout<<implode("|",explode(":",str));
  print_r(str_split(str,5));
}