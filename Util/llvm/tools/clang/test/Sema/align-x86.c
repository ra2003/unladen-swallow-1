// RUN: clang-cc -triple i386-apple-darwin9 -fsyntax-only -verify %s

// PR3433
double g1;
short chk1[__alignof__(g1) == 8 ? 1 : -1]; 
short chk2[__alignof__(double) == 8 ? 1 : -1]; 