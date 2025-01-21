# Division by Zero in C

This repository demonstrates a common C programming error: division by zero. The `bug.c` file contains code that attempts to divide an integer by zero.  The `bugSolution.c` file provides a corrected version with input validation to prevent the error.  This example highlights the importance of robust error handling in C to avoid program crashes and unexpected behavior.

## How to Run

1. Clone the repository.
2. Compile each .c file using a C compiler (like GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
3. Run the executables:
   ```bash
   ./bug
   ./bugSolution
   ```

Observe the difference in behavior.