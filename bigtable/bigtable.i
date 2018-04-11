%module bigtable
%include "std_string.i"
%include "std_vector.i"

namespace std {
   %template(vectori) vector<int>;
   %template(vectord) vector<double>;
};


%{
#define SWIG_FILE_WITH_INIT
#include "bigtable.h"
%}


%include "bigtable.h"
