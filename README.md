# ntl64bits_test

This repository tests the function PowerMod from NTL library. 

In my test machine this code outputs:

```
➜  ~  ./ntl_powermod_test 
It fails: 
P: 18446744069414584321
k: 144115188042301440
wN: 4294967296

It works: 
P: 18446744069414584321
k: 144115188042301440
wN: 17870292113338400769
wNuint64t: 17870292113338400769
```

It is a 64bits machine, running NTL and GMP compiled using -m64 flag. uint64\_t should be a typedef of long, that should be 64 bits. However, NTL truncates the input to 32 bits and returns a wrong wN. In the other hand, if we use PowerMod using only ZZs, the result is correct and fits completely  in uint64\_t.

