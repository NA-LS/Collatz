# Collatz Program:

The collatz.c file contains the serial implementation of the Collatz algorithm and it works well and was tested with a number of 18 digits.
  - To run the program you need to enter a value that you would like to test in the terminal, it will then provide you with the output within a few seconds.

**How to run the program: (in Linux)**
1. In terminal run the following command ~$ cc -Wall -ansi -pedantic -o collatz collatz.c
2. Once the program has compiled run the executable by running the following command: ~$ ./collatz
3. The output of the program will then be displayed in the terminal

I would like to use my serial implementation for testing please.

-------------------------------------------------------------------------------------------------------------------------------------------------------------------

The collatz_parallel.c file contains the parallel implementation of the Collatz algorithm but is incomplete. The program runs but produces the incorrect outputs, I have tried to get it working but was unable to get it working in the given time.

I used C to code the serial implementation and C with the OpenMP library to code the parallel implementation.

**How to run the program: (in Linux)**
1. In terminal run the following command ~$ gcc -g -Wall -fopenmp -o collatz_parallel collatz_parallel.c
2. Once the program has compiled run the executable by running the following command: ~$ ./collatz_parallel #number_of_threads
  with the number of threads specified.
3. The output of the program will then be displayed in the terminal
