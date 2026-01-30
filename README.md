# Tic-Tac-Toe Game in C++

## Project Description

This project is a simple console-based Tic-Tac-Toe game written in C++. The game allows two players to alternate making moves on a 3x3 grid and determine a winner or a draw. The project is designed to be a beginner-level introduction to C++ programming concepts such as 2D arrays, functions, loops, and conditional statements.

---

## Technologies Used

- **Programming Language**: C++
- **Development Environment**: Any C++ compiler (e.g., GCC, Clang, MSVC)

---

## Files Included

- `tictactoe.cpp`: The main C++ source code file for the Tic-Tac-Toe game.

---

## Features

- **Player vs Player Mode**: Two players can take turns to play on the same machine.
- **Input Validation**: Ensures that moves are made within valid grid positions and only on empty spaces.
- **Winner Detection**: Detects the winner based on row, column, or diagonal matching.
- **Draw Detection**: Identifies if the game ends in a draw (when the board is full).
- **Alternate Player Turns**: Players alternate between 'X' and 'O' with each turn.

---

## File Structure

```
Tic-Tac-Toe-cpp/
├── .gitignore (to ignore other compiled/object files)
├── README.md (Project documentation (this file))
└── tictactoe.cpp (Main C++ source code file for the Tic-Tac-Toe game)
```

---

## How to Compile / Run

1. **Clone or download the repository**
   ```
   git clone https://github.com/skeleton111222/Tic-Tac-Toe-cpp
   ```
2. **Open a terminal or command prompt** in the directory containing `tictactoe.cpp` or simply redirect to it using
   ```
   cd Tic-Tac-Toe-cpp
   ```
3. **Compile the C++ code**:
   ```
   g++ -o tictactoe tictactoe.cpp
   ```
4. **Run the compiled program**:
   ```
   ./tictactoe
   ```
5. Follow the on-screen instructions to play the game by entering row and column numbers for your moves.

---

## Notes

- The game uses a 3x3 grid represented by a 2D array.
- The game alternates between Player X and Player O. Player X always goes first.
- Make sure you input valid row and column numbers (between 0 and 2) during your turn.
- The board will be displayed after each move, showing the current state of the game.
- The game ends when a player wins or when the board is full (resulting in a draw).

---

## Sample Output

### Starting the Game:

```
-------------
|   |   |   |
-------------
|   |   |   |
-------------
|   |   |   |
-------------
Player X, enter row and column (0-2) to make a move: 0 0
```

### After Player X's Move:

```
-------------
| X |   |   |
-------------
|   |   |   |
-------------
|   |   |   |
-------------
Player O, enter row and column (0-2) to make a move: 1 1
```

### After Several Moves:

```
-------------
| X | X |   |
-------------
|   | O |   |
-------------
|   |   |   |
-------------
Player X, enter row and column (0-2) to make a move: 0 2
```

### Game Result (Player X Wins):

```
-------------
| X | X | X |
-------------
|   | O |   |
-------------
|   | O |   |
-------------
Player X wins!
```

### Draw Scenario:

```
-------------
| X | O | X |
-------------
| O | X | O |
-------------
| X | X | O |
-------------
Player X, enter row and column (0-2) to make a move: 0 0
```

```
-------------
| X | O | X |
-------------
| O | X | O |
-------------
| X | X | O |
-------------
Player O, enter row and column (0-2) to make a move: 2 2
```

```
-------------
| X | O | X |
-------------
| O | X | O |
-------------
| X | X | O |
-------------
It's a draw!
```

---

## Future Enhancements

- **AI Opponent**: Implement a simple AI opponent for single-player mode.
- **Graphical User Interface (GUI)**: Create a GUI version of the game using libraries like SDL or SFML.
- **Save Game**: Implement functionality to save the game state and resume later.
- **Undo Move**: Allow players to undo their last move if needed.
- **Multiple Game Modes**: Introduce more advanced game modes like best-of-three or timed games.

---

## Conclusion

This project was a fun way for us to explore basic C++ concepts like arrays, loops, conditionals, and functions.  
It was simple and easy to follow, making it a great starting point for beginners.

By completing this project,helps to gain a solid understanding of handling user input, validating it, and implementing simple game logic in C++.
