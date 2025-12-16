## In order to compile to G++
## Where example.cpp is replaced with your main.cpp
NAME=example

cd src/
gcc ../$NAME.cpp co3ncrypt.cpp key_generation.cpp tools.cpp -o ../$NAME.so

bash ../$NAME.so
