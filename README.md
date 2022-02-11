# gdb-basics
A short intro to using gdb in unix since I haven't found one simple enough to show students, but comprehensive enough (in a package) that they can follow along. This is by no means exhaustive of what can be done with gdb, but is intended to ease the pains of getting started.

## Included
- Trivial linked list example that intentionally throws a segfault when run. 
- A pdf walking through how to use gdb to find the cause of the segfault.<br>

A trivial linked list program that ***WILL*** segfault when run. We simulate an SIGSEGV by setting as valid pointer to NULL in line 59 of [studentList.c](./src/studentList.c) and then dereferencing it on line 33. For normal execution, just remove/comment out line 59.
