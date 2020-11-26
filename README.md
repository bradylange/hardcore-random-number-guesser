# hardcore-random-number-guesser
Hardcore random number guessing game that doesn't allow the user to kill the game.

Brady Lange

04/16/18

Op Sys Programming

Assignment 4

## `src/hardcore_guess.c`
This program allows a user to guess a number that is randomly generated and between 1 and 10,000.
The user is not allowed to quit on their leisure and is forced to guess the correct number because
the kill signal is caught and handled with the signal function.

### Input:

`a.out`

`4`

`<Ctrl + C>`

### Output:

`Guess a number between 1 and 10,000 until you're right.`

```
Wrong number. Please guess again!
Guess a number between 1 and 10,000 until you're right.
```

Or

`Congratulations! You have guessed the correct number: 4`

Or

```
Wrong number. Please guess again!
Guess a number between 1 and 10,000 until you're right.

You cannot exit the program using the command CTRL + C.
```

## Issues:
- `hardcore_guess.c`: Program exits if `<Ctrl + C>` is executed twice.