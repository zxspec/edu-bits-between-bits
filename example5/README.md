# Dynamic Shared Library

## compile

```sh
# compile shared library
g++ -shared -fPIC getMessage.cpp -o libgetMessage.so
# compile main binary depending on shared lib
g++ main.cpp -L. -lgetMessage -o main
```

## run
System should know where to find library with or extend `$LD_LIBRARY_PATH`
```sh
export LD_LIBRARY_PATH=/path/to/library/directory:$LD_LIBRARY_PATH
```
or 
```sh
LD_LIBRARY_PATH=$PWD ./main
```

