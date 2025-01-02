This project focuses on designing and implementing a C program to compress and decompress DNA strings using bitwise operators, demonstrating an understanding of binary representation and efficient manipulation of data. DNA strings, which consist of the characters {A, T, C, G}, are encoded into compact binary format using a predefined mapping: A as 00, T as 01, C as 10, and G as 11. The program must handle two operations based on command-line flags: compression (-c), which converts a DNA string into a binary-encoded integer, and decompression (-d), which reverses the process, restoring the original DNA string from its binary representation. The implementation emphasizes the use of at least three different bitwise operators, such as shifts (<<, >>) and bit masking (&, |), to achieve efficient and lossless compression. The solution must handle non-trivial logic, use multiple source files and header files compiled via a Makefile, and complete execution within five seconds in a Unix environment. This project serves as a practical exploration of lossless text compression, bitwise data manipulation, and command-line programming in C.

Test Cases:

./proj1.out -c ATTCGG
6 22 240

./proj1.out -c CAT
3 132

./proj1.out -c AGTCCCAGATTTCCC
15 54 163 21 168
2

./proj1.out -c GTTAACCGGTTAGGCCTCCTC
21 212 43 212 250 105 128

./proj1.out -c CCCCTAGAGAGAGAGAGCCGAGTTCAAAGTCAAAACCCATTCTCTCTCCTCG
52 170 76 204 204 235 53 128 216 2 161 102 102 155

./proj1.out -d 6 22 240
ATTCGG

./proj1.out -d 3 132
CAT

./proj1.out -d 15 54 163 21 168
AGTCCCAGATTTCCC

./proj1.out -d 21 212 43 212 250 105 128
GTTAACCGGTTAGGCCTCCTC

./proj1.out -d 52 170 76 204 204 235 53 128 216 2 161 102 102 155
CCCCTAGAGAGAGAGAGCCGAGTTCAAAGTCAAAACCCATTCTCTCTCCTCG
