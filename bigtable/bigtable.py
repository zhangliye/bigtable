# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.12
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

from sys import version_info as _swig_python_version_info
if _swig_python_version_info >= (2, 7, 0):
    def swig_import_helper():
        import importlib
        pkg = __name__.rpartition('.')[0]
        mname = '.'.join((pkg, '_bigtable')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_bigtable')
    _bigtable = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_bigtable', [dirname(__file__)])
        except ImportError:
            import _bigtable
            return _bigtable
        try:
            _mod = imp.load_module('_bigtable', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _bigtable = swig_import_helper()
    del swig_import_helper
else:
    import _bigtable
del _swig_python_version_info

try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr(self, class_type, name):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    raise AttributeError("'%s' object has no attribute '%s'" % (class_type.__name__, name))


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except __builtin__.Exception:
    class _object:
        pass
    _newclass = 0

class SwigPyIterator(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SwigPyIterator, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SwigPyIterator, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _bigtable.delete_SwigPyIterator
    __del__ = lambda self: None

    def value(self):
        return _bigtable.SwigPyIterator_value(self)

    def incr(self, n=1):
        return _bigtable.SwigPyIterator_incr(self, n)

    def decr(self, n=1):
        return _bigtable.SwigPyIterator_decr(self, n)

    def distance(self, x):
        return _bigtable.SwigPyIterator_distance(self, x)

    def equal(self, x):
        return _bigtable.SwigPyIterator_equal(self, x)

    def copy(self):
        return _bigtable.SwigPyIterator_copy(self)

    def next(self):
        return _bigtable.SwigPyIterator_next(self)

    def __next__(self):
        return _bigtable.SwigPyIterator___next__(self)

    def previous(self):
        return _bigtable.SwigPyIterator_previous(self)

    def advance(self, n):
        return _bigtable.SwigPyIterator_advance(self, n)

    def __eq__(self, x):
        return _bigtable.SwigPyIterator___eq__(self, x)

    def __ne__(self, x):
        return _bigtable.SwigPyIterator___ne__(self, x)

    def __iadd__(self, n):
        return _bigtable.SwigPyIterator___iadd__(self, n)

    def __isub__(self, n):
        return _bigtable.SwigPyIterator___isub__(self, n)

    def __add__(self, n):
        return _bigtable.SwigPyIterator___add__(self, n)

    def __sub__(self, *args):
        return _bigtable.SwigPyIterator___sub__(self, *args)
    def __iter__(self):
        return self
SwigPyIterator_swigregister = _bigtable.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

class StringVector(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, StringVector, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, StringVector, name)
    __repr__ = _swig_repr

    def iterator(self):
        return _bigtable.StringVector_iterator(self)
    def __iter__(self):
        return self.iterator()

    def __nonzero__(self):
        return _bigtable.StringVector___nonzero__(self)

    def __bool__(self):
        return _bigtable.StringVector___bool__(self)

    def __len__(self):
        return _bigtable.StringVector___len__(self)

    def __getslice__(self, i, j):
        return _bigtable.StringVector___getslice__(self, i, j)

    def __setslice__(self, *args):
        return _bigtable.StringVector___setslice__(self, *args)

    def __delslice__(self, i, j):
        return _bigtable.StringVector___delslice__(self, i, j)

    def __delitem__(self, *args):
        return _bigtable.StringVector___delitem__(self, *args)

    def __getitem__(self, *args):
        return _bigtable.StringVector___getitem__(self, *args)

    def __setitem__(self, *args):
        return _bigtable.StringVector___setitem__(self, *args)

    def pop(self):
        return _bigtable.StringVector_pop(self)

    def append(self, x):
        return _bigtable.StringVector_append(self, x)

    def empty(self):
        return _bigtable.StringVector_empty(self)

    def size(self):
        return _bigtable.StringVector_size(self)

    def swap(self, v):
        return _bigtable.StringVector_swap(self, v)

    def begin(self):
        return _bigtable.StringVector_begin(self)

    def end(self):
        return _bigtable.StringVector_end(self)

    def rbegin(self):
        return _bigtable.StringVector_rbegin(self)

    def rend(self):
        return _bigtable.StringVector_rend(self)

    def clear(self):
        return _bigtable.StringVector_clear(self)

    def get_allocator(self):
        return _bigtable.StringVector_get_allocator(self)

    def pop_back(self):
        return _bigtable.StringVector_pop_back(self)

    def erase(self, *args):
        return _bigtable.StringVector_erase(self, *args)

    def __init__(self, *args):
        this = _bigtable.new_StringVector(*args)
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this

    def push_back(self, x):
        return _bigtable.StringVector_push_back(self, x)

    def front(self):
        return _bigtable.StringVector_front(self)

    def back(self):
        return _bigtable.StringVector_back(self)

    def assign(self, n, x):
        return _bigtable.StringVector_assign(self, n, x)

    def resize(self, *args):
        return _bigtable.StringVector_resize(self, *args)

    def insert(self, *args):
        return _bigtable.StringVector_insert(self, *args)

    def reserve(self, n):
        return _bigtable.StringVector_reserve(self, n)

    def capacity(self):
        return _bigtable.StringVector_capacity(self)
    __swig_destroy__ = _bigtable.delete_StringVector
    __del__ = lambda self: None
StringVector_swigregister = _bigtable.StringVector_swigregister
StringVector_swigregister(StringVector)

class IntVector(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, IntVector, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, IntVector, name)
    __repr__ = _swig_repr

    def iterator(self):
        return _bigtable.IntVector_iterator(self)
    def __iter__(self):
        return self.iterator()

    def __nonzero__(self):
        return _bigtable.IntVector___nonzero__(self)

    def __bool__(self):
        return _bigtable.IntVector___bool__(self)

    def __len__(self):
        return _bigtable.IntVector___len__(self)

    def __getslice__(self, i, j):
        return _bigtable.IntVector___getslice__(self, i, j)

    def __setslice__(self, *args):
        return _bigtable.IntVector___setslice__(self, *args)

    def __delslice__(self, i, j):
        return _bigtable.IntVector___delslice__(self, i, j)

    def __delitem__(self, *args):
        return _bigtable.IntVector___delitem__(self, *args)

    def __getitem__(self, *args):
        return _bigtable.IntVector___getitem__(self, *args)

    def __setitem__(self, *args):
        return _bigtable.IntVector___setitem__(self, *args)

    def pop(self):
        return _bigtable.IntVector_pop(self)

    def append(self, x):
        return _bigtable.IntVector_append(self, x)

    def empty(self):
        return _bigtable.IntVector_empty(self)

    def size(self):
        return _bigtable.IntVector_size(self)

    def swap(self, v):
        return _bigtable.IntVector_swap(self, v)

    def begin(self):
        return _bigtable.IntVector_begin(self)

    def end(self):
        return _bigtable.IntVector_end(self)

    def rbegin(self):
        return _bigtable.IntVector_rbegin(self)

    def rend(self):
        return _bigtable.IntVector_rend(self)

    def clear(self):
        return _bigtable.IntVector_clear(self)

    def get_allocator(self):
        return _bigtable.IntVector_get_allocator(self)

    def pop_back(self):
        return _bigtable.IntVector_pop_back(self)

    def erase(self, *args):
        return _bigtable.IntVector_erase(self, *args)

    def __init__(self, *args):
        this = _bigtable.new_IntVector(*args)
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this

    def push_back(self, x):
        return _bigtable.IntVector_push_back(self, x)

    def front(self):
        return _bigtable.IntVector_front(self)

    def back(self):
        return _bigtable.IntVector_back(self)

    def assign(self, n, x):
        return _bigtable.IntVector_assign(self, n, x)

    def resize(self, *args):
        return _bigtable.IntVector_resize(self, *args)

    def insert(self, *args):
        return _bigtable.IntVector_insert(self, *args)

    def reserve(self, n):
        return _bigtable.IntVector_reserve(self, n)

    def capacity(self):
        return _bigtable.IntVector_capacity(self)
    __swig_destroy__ = _bigtable.delete_IntVector
    __del__ = lambda self: None
IntVector_swigregister = _bigtable.IntVector_swigregister
IntVector_swigregister(IntVector)

class TableRow(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TableRow, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TableRow, name)
    __repr__ = _swig_repr

    def __init__(self):
        this = _bigtable.new_TableRow()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this

    def update(self, row):
        return _bigtable.TableRow_update(self, row)
    __swig_destroy__ = _bigtable.delete_TableRow
    __del__ = lambda self: None
TableRow_swigregister = _bigtable.TableRow_swigregister
TableRow_swigregister(TableRow)

class BigTable(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, BigTable, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, BigTable, name)
    __repr__ = _swig_repr

    def __init__(self):
        this = _bigtable.new_BigTable()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this

    def addFiles(self, files):
        return _bigtable.BigTable_addFiles(self, files)

    def addFile(self, s):
        return _bigtable.BigTable_addFile(self, s)

    def setTypes(self, dtypes):
        return _bigtable.BigTable_setTypes(self, dtypes)

    def nextRow(self):
        return _bigtable.BigTable_nextRow(self)
    __swig_destroy__ = _bigtable.delete_BigTable
    __del__ = lambda self: None
BigTable_swigregister = _bigtable.BigTable_swigregister
BigTable_swigregister(BigTable)


def createTable():
    return _bigtable.createTable()
createTable = _bigtable.createTable

def addFiles(arg1, s):
    return _bigtable.addFiles(arg1, s)
addFiles = _bigtable.addFiles

def repeat(s):
    return _bigtable.repeat(s)
repeat = _bigtable.repeat

def vector_int2str(input):
    return _bigtable.vector_int2str(input)
vector_int2str = _bigtable.vector_int2str

def gcd(x, y):
    return _bigtable.gcd(x, y)
gcd = _bigtable.gcd
# This file is compatible with both classic and new-style classes.


