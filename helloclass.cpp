#include "helloclass.h"
#include <iostream>
using namespace std;

HelloClass::HelloClass()
   {
     cout << "creating" << endl;
   }

void HelloClass::sayHello()
   {
     cout << "Hello Class!" << endl;
   }

 HelloClass::~HelloClass()
   {
    cout << "destroying" << endl;
   }


