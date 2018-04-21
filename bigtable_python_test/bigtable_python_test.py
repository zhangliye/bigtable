import sys
sys.path.append( r"E:\liye\develop\c++\bigtable\bigtable" )

import bigtable
print dir(bigtable)

tb = bigtable.BigTable()
f = r'E:\test\ttt\forecasting-test\test.csv'
tb.addFile( f )

while -1 != tb.next():
    tb.next()

if False:
    import pandas as pd
    import timeit
    start = timeit.default_timer()
    frm = pd.read_csv(f)
    stop = timeit.default_timer()
    print stop - start