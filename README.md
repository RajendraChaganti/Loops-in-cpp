# Loops-in-cpp

## Aim: To study and implement different types of loops like for , while , nested for , etc in C++.

## Tools: GNU g++ compiler (for local execution)Any code editor or an Online C++ Compiler)

# Theory : 

Loops in C++ are useful to **replicate a block of code** over and over again until a certain condition is false. Loops will also allow you to automate repetitious tasks, eliminate redundancies in your code, and allow you to manage iterations to process a group of data efficiently. Two common loops that can be visited for these actions are **for loop** and **while loop**.

## Exp-6-A: While Loop - Password Program

**Algorithm:**

1. Start the program.
2. Define a correct password as `"3985"`.
3. Ask the user to enter a password.
4. Read the user's input.
5. Check if the input is not equal to the correct password.
6. If not correct, show a message `"Incorrect password. Try again"` and ask for input again.
7. Repeat steps 4 to 6 until the entered password matches the correct one.
8. When the password matches, print `"Password accepted. Access granted!"`.
9. End the program.

## Exp-6-B: For Loop - Even Numbers (2 to 10) :

**Algorithm:**

1. Start the program.
2. Declare an integer variable `i`.
3. Initialize a `for` loop with `i = 2`.
4. Check if `i` is less than or equal to 10.
5. If true, print the value of `i`.
6. Increment `i` by 2.
7. Repeat steps 4 to 6 until the condition becomes false.
8. End the program.

## Exp-6-C: For Loop - Print "SIT" 5 Times :

**Algorithm:**

1. Start the program.
2. Declare an integer variable `i`.
3. Start a `for` loop from `i = 1` to `i <= 5`.
4. In each loop iteration, print `"SIT"` on a new line.
5. Increment the loop variable by 1.
6. Repeat steps 4 and 5 until the loop ends.
7. End the program.

## Exp-6-D: For Loop - Odd Numbers (1 to 9) :

**Algorithm:** 

1. Start the program.
2. Declare an integer variable `i`.
3. Initialize a `for` loop with `i = 1`.
4. Check if `i` is less than 10.
5. If true, print the value of `i`.
6. Increment `i` by 2.
7. Repeat steps 4 to 6 until the condition becomes false.
8. End the program.

## Exp-6-E: Nested For Loop - Right Angled Triangle :

**Algorithm:**

1. Start the program.
2. Use a loop `i` from 1 to 6 for rows.
3. For each row, use an inner loop `j` from 1 to `i`.
4. Inside the inner loop, print `"* "` to display stars.
5. After inner loop ends, print a new line to start the next row.
6. Repeat steps 3 to 5 for all rows.
7. End the program.

## Exp-6-F: Nested For Loop - Inverted Right Angled Triangle :

**Algorithm:**

1. Start the program.
2. Use a loop `i` from 6 down to 1 for rows.
3. For each row, use an inner loop `j` from 1 to `i`.
4. Print `"* "` for each column in the inner loop.
5. After inner loop, print a newline to go to the next row.
6. Repeat steps 3 to 5 until all rows are printed.
7. End the program.

## Exp-6-G: Nested For Loop - Right Aligned Right Angled Triangle :

**Algorithm:**

1. Start the program.
2. Use a loop `i` from 1 to 6 for rows.
3. In each row, run a loop `j` from 1 to `6 - i` to print spaces.
4. Then run another loop `j` from 1 to `i` to print `"* "` stars.
5. After both loops, print a newline to start next row.
6. Repeat steps 3 to 5 for all rows.
7. End the program.

## Exp-6-H: Nested For Loop - Equilateral Triangle (Centered) :

**Algorithm:**

1. Start the program.
2. Use a loop `i` from 1 to 6 for rows.
3. In each row, run a loop to print `6 - i` spaces for alignment.
4. Then run a loop to print `i` stars followed by space.
5. Print newline after inner loops finish.
6. Repeat steps 3 to 5 for all rows.
7. End the program.

## Exp-6-I: Nested For Loop - Number Triangle :

**Algorithm:**

1. Start the program.
2. Declare an integer variable `num` and initialize it to 1.
3. Use a loop `i` from 1 to 4 for rows.
4. Inside the outer loop, use a loop `j` from 1 to `i`.
5. Print the value of `num` followed by a space.
6. Increment `num` by 1.
7. After inner loop ends, print a new line.
8. Repeat steps 4 to 7 until all rows are printed.
9. End the program.

## Exp-6-J: For Loop - Numbers from 1 to 20 in One Line :

**Algorithm:**

1. Start the program.
2. Declare an integer variable `i`.
3. Use a loop from `i = 1` to `i <= 20`.
4. In each iteration, print the value of `i` followed by space.
5. Increment `i` by 1.
6. Repeat steps 4 and 5 until loop finishes.
7. End the program.


## Conclusion:

We have learnt the concepts of looping in C++ and also used conditions in it for implementing a suitable program.
