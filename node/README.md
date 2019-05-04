# IncludeOS Demo Service


### Build and run service

```
  mkdir build
  cd build
  conan install  .. -pr gcc-7.3.0-linux-x86_64
  source activate.sh
  cmake ..
  cmake --build .
  source deactivate.sh
```
