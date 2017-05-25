# Interfacing with C code from Python using SWIG
Example code for interfacing with C code from Python using SWIG.


## Building

### Mac OS X or Linus
Build the SWIG wrapper using the following shell script:

    ./build_swig_python_wrapper.sh
    
### Windows
Build the SWIG wrapper using the following batch file:

    build_swig_python_wrapper.bat
    

## Evaluating
Compare the results of a pure Python implementation to that of the SWIG wrapper using:

    ./test_swig.py

## Code Files
* Pure Python implementation
    * fib_python.py
* C implementation
    * fibonacci.h/.c
* SWIG
    * Interface File
        * fibonacci.i
    * Distutils script
        * setup.py
