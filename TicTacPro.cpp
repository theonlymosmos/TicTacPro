//https://www.linkedin.com/in/mousa123/

#include <iostream>
using namespace std;

int main()
{
    bool flag;
    int row;
    int col;
    char turnType;
    string playerNum;
    char again;

    do
    {
        char v1 = '-'; //row1column1
        char v2 = '-'; //row1column2
        char v3 = '-'; //row1column3
        char v4 = '-'; //row2column1
        char v5 = '-'; //row2column2
        char v6 = '-'; //row2column3
        char v7 = '-'; //row3column1
        char v8 = '-'; //row3column2
        char v9 = '-'; //row3column3

        cout << "The current board is:" << endl << v1 << " " << v2 << " " << v3 << endl
             << v4 << " " << v5 << " " << v6 << endl
             << v7 << " " << v8 << " " << v9 << endl;

        turnType = 'O';
        playerNum = "one";

        while (v1 == '-' || v2 == '-' || v3 == '-' || v4 == '-' || v5 == '-' || v6 == '-' || v7 == '-' || v8 == '-' || v9 == '-')
        {
            // Player prompt to enter input
            cout << "Enter your move (player " << playerNum << "): ";
            cin >> row >> col;

            // Validate move
            if (row < 1 || row > 3 || col < 1 || col > 3)
            {
                cout << "Invalid move! Row and column must be between 1 and 3." << endl;
                continue;
            }

            // Determine the cell to update based on user input
            // After that, print the turnType which is either X or O
            char& cell = (row == 1) ? ((col == 1) ? v1 : ((col == 2) ? v2 : v3)) :
                         (row == 2) ? ((col == 1) ? v4 : ((col == 2) ? v5 : v6)) :
                         ((col == 1) ? v7 : ((col == 2) ? v8 : v9));

            if (cell != '-')
            {
                cout << "Invalid move! Cell already occupied." << endl;
                continue;
            }

            cell = turnType;

            // Print the current state of the board after the move
            cout << "The current board is:" << endl
                 << v1 << " " << v2 << " " << v3 << endl
                 << v4 << " " << v5 << " " << v6 << endl
                 << v7 << " " << v8 << " " << v9 << endl;

            // WIN CONDITIONS
            // Check for horizontal win conditions for Player Two (X)
            if ((v1 == 'X' && v2 == 'X' && v3 == 'X') ||
                (v4 == 'X' && v5 == 'X' && v6 == 'X') ||
                (v7 == 'X' && v8 == 'X' && v9 == 'X')) {
                cout << "Player two is the winner\n";
                break;
            }
                // Check for vertical win conditions for Player Two (X)
            else if ((v1 == 'X' && v4 == 'X' && v7 == 'X') ||
                     (v2 == 'X' && v5 == 'X' && v8 == 'X') ||
                     (v3 == 'X' && v6 == 'X' && v9 == 'X')) {
                cout << "Player two is the winner\n";
                break;
            }
                // Check for diagonal win conditions for Player Two (X)
            else if ((v1 == 'X' && v5 == 'X' && v9 == 'X') ||
                     (v3 == 'X' && v5 == 'X' && v7 == 'X')) {
                cout << "Player two is the winner\n";
                break;
            }
                // Repeat the same checks for Player One (O)
            else if ((v1 == 'O' && v2 == 'O' && v3 == 'O') ||
                     (v4 == 'O' && v5 == 'O' && v6 == 'O') ||
                     (v7 == 'O' && v8 == 'O' && v9 == 'O')) {
                cout << "Player one is the winner\n";
                break;
            }
            else if ((v1 == 'O' && v4 == 'O' && v7 == 'O') ||
                     (v2 == 'O' && v5 == 'O' && v8 == 'O') ||
                     (v3 == 'O' && v6 == 'O' && v9 == 'O')) {
                cout << "Player one is the winner\n";
                break;
            }
            else if ((v1 == 'O' && v5 == 'O' && v9 == 'O') ||
                     (v3 == 'O' && v5 == 'O' && v7 == 'O')) {
                cout << "Player one is the winner\n";
                break;
            }

            // Switch player turns
            turnType = (turnType == 'O') ? 'X' : 'O';
            playerNum = (turnType == 'O') ? "one" : "two";
        }

        if (v1 != '-' && v2 != '-' && v3 != '-' &&
            v4 != '-' && v5 != '-' && v6 != '-' &&
            v7 != '-' && v8 != '-' && v9 != '-') {
            cout << "No winners!" << endl;
        }

        // // No empty cells, end the game
// Prompt to play again
        cout << "Do you want to play again? (y/n)";
        cin >> again;

// Handle play again input
        if (again == 'y')
            flag = true;
        else if (again == 'n')
            flag = false;
        else
            cout << "Invalid input!" << endl;

    }
    while (flag == true);

    return 0;
}