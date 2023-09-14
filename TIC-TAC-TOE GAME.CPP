#include<bits/stdc++.h>
using namespace std;

// Length of the board
#define SIDE 3

// Function to show the current board status
void showBoard(char board[][SIDE])
{
    cout << "\n\n";
    for (int i = 0; i < SIDE; i++)
    {
        for (int j = 0; j < SIDE; j++)
        {
            cout << "\t" << board[i][j];
        }
        cout << "\n\n";
    }
}

// Function to show the instructions
void showInstructions()
{
    cout << "\t\tTic-Tac-Toe Game\n\n";
    cout << "Choose a cell number from 1 to 9 as below and play\n\n";
    cout << "\t\t 1 | 2 | 3 \n";
    cout << "\t\t-----------\n";
    cout << "\t\t 4 | 5 | 6 \n";
    cout << "\t\t-----------\n";
    cout << "\t\t 7 | 8 | 9 \n\n";
}

// Function to initialize the game
void initialize(char board[][SIDE], int moves[])
{
    // Initiate the random number generator
    srand(time(NULL));

    // Initially the board is empty
    for (int i = 0; i < SIDE; i++)
    {
        for (int j = 0; j < SIDE; j++)
            board[i][j] = ' ';
    }

    // Fill the moves with numbers
    for (int i = 0; i < SIDE * SIDE; i++)
        moves[i] = i;

    // Randomize the moves
    random_shuffle(moves, moves + SIDE * SIDE);
}

// Function that returns true if any of the rows is crossed with the same player's move
bool rowCrossed(char board[][SIDE], char player)
{
    for (int i = 0; i < SIDE; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }
    return false;
}

// Function that returns true if any of the columns is crossed with the same player's move
bool columnCrossed(char board[][SIDE], char player)
{
    for (int i = 0; i < SIDE; i++)
    {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    return false;
}

// Function that returns true if any of the diagonals is crossed with the same player's move
bool diagonalCrossed(char board[][SIDE], char player)
{
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Function that returns true if the game is over else it returns false
bool gameOver(char board[][SIDE], char player)
{
    return (rowCrossed(board, player) || columnCrossed(board, player) || diagonalCrossed(board, player));
}

// Function to play Tic-Tac-Toe
void playTicTacToe()
{
    // A 3*3 Tic-Tac-Toe board for playing
    char board[SIDE][SIDE];

    int moves[SIDE * SIDE];

    // Initialize the game
    initialize(board, moves);

    // Show instructions before playing
    showInstructions();

    int moveIndex = 0, x, y;
    char currentPlayer = 'X';

    // Keep playing till the game is over or it is a draw
    while (moveIndex != SIDE * SIDE)
    {
        cout << "Player " << currentPlayer << ", Enter the cell number to place your mark: ";
        int cell;
        cin >> cell;

        if (cell < 1 || cell > 9)
        {
            cout << "Invalid cell number. Please enter a number between 1 and 9.\n";
            continue;
        }

        x = (cell - 1) / SIDE;
        y = (cell - 1) % SIDE;

        if (board[x][y] == ' ')
        {
            board[x][y] = currentPlayer;
            moveIndex++;
            showBoard(board);

            if (gameOver(board, currentPlayer))
            {
                cout << "Player " << currentPlayer << " wins! congatulation \n";
                break;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        else
        {
            cout << "Cell already occupied. Choose another cell.\n";
        }
    }

    if (moveIndex == SIDE * SIDE)
    {
        cout << "It's a draw!\n";
    }
}

// Driver Code
int main()
{
    // Let us play the game
    int a;
    do{
    	cout<<"\n\t\t\t\t------------welcome to playing mind game :--------------"<<endl;
    cout<<"\nEnter 1 to playing game :"<<endl;
      
    cout<< "\nEnter 0 exit game:"<<endl;
    cin>>a;
    switch(a)
    {
    case 1:
     playTicTacToe();
        break;
    case 0:
     exit(0);
        break;
}

 }
  while(a>=0 &&a<=2);
  return 0;
}
  

