# Possible scenarios
These are the scenarios I faced, you may get different errors. As I get more different errors, I will update the readme file.
### 1.Compile error
- #### Undefined reference error for **math.h** header
  - Although this is not the case for MinGW, if you are getting this error while compiling on linux, you have to link the math.h file when compiling.
    - **For windows**: gcc main.c
    - **For Linux**: gcc main.c -lm
