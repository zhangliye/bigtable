// section 1, model name
%module bigtable

///////////////////////////////////////////////////////////////////////////////
//                  std declaration 
%include <std_string.i>
%include <std_vector.i>
%include <std_map.i>

namespace std {
  %template(StringVector) vector<string>;
  %template(IntVector) vector<int>;
  %template(StringMap) map<string, string>;
}

//
///////////////////////////////////////////////////////////////////////////////

// seciton 2, 
%{
#define SWIG_FILE_WITH_INIT

using namespace std;
#include "bigtable.h"
#include "bigtableinterface.h"
%}

///////////////////////////////////////////////////////////////////////////////
//                                 section 3,  typemap
%typemap(out) TableRow& {
	 PyObject *o = PyTuple_New(2);
	 PyTuple_SetItem(o, 0, PyInt_FromLong(12));
	 PyTuple_SetItem(o, 1, PyInt_FromLong(22));
	 $result = o;
}

/*
%typemap(in) map<string, string> dtypes {	
	 PyObject *pKeys = PyDict_Keys( $input );
	 int size = PyList_Size( pKeys );
	 map<string, string> rst;
	 for(int i=0; i<size; ++i){
		PyObject *pKey = PyList_GetItem( pKeys, i );
		PyObject *pValue = PyTuple_GetItem( $input, pKey );
		if (!PyString_Check(pValue)) {
			PyErr_SetString(PyExc_ValueError,"Expected a string");
			free( $input );
			return NULL;
		} 
		//Char = PyString_AsString(pValue);    //char *
		
		rst['hh'] = "kk";
	 }
	 
	 $1 = rst;
}
*/
//
////////////////////////////////////////////////////////////////////////////////


%include "bigtable.h"
%include "bigtableinterface.h"

