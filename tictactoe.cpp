#include <iostream>
#include<cstdio>
using namespace std;
char board[3][3];
void initBoard();
void printBoard();
int checkWinner();
int main(){
    initBoard();
    int turn, winner = 0;
    char player;
    for (turn = 1; turn <= 9; turn++){
        printBoard();
        player = (turn % 2 != 0) ? 'X' : 'O';
        cout<<"Player "<<player<<", enter row(0-2) and col(0-2) : ";
        int r, c;
        // Basic input validation to prevent crashes
        if (scanf("%d %d", &r, &c) != 2){
            cout<<"Invalid input!"<<endl;
            return 1;
        }
        if (r >= 0 && r <= 2 && c >= 0 && c <= 2 && board[r][c] == ' '){
            board[r][c] = player;
            winner = checkWinner();
            if (winner != 0) break;
        } 
        else{
            cout<<"Invalid move or cell occupied!"<<endl;
            turn--; // Don't count invalid moves
        }
    }
    printBoard();
    if (winner == 1){
        cout<<"Player X wins!"<<endl;
    }
    else if (winner == 2) {
        cout<<"Player O wins!"<<endl;
    }
    else {
        cout<<"It's a draw!"<<endl;
    }
    return 0;
}
void initBoard(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}
void printBoard(){
    cout<<"\n "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" \n";
    cout<<"___________"<<endl;
    cout<<"\n "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" \n";
    cout<<"___________"<<endl;
    cout<<"\n "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" \n";
}
int checkWinner(){
    // Check rows
    for (int i = 0; i < 3; i++){
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            return (board[i][0] == 'X') ? 1 : 2;
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++){
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            return (board[0][i] == 'X') ? 1 : 2;
        }
    }
    // Check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        return (board[0][0] == 'X') ? 1 : 2;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return (board[0][2] == 'X') ? 1 : 2;
    }
    return 0; // No winner yet
}
