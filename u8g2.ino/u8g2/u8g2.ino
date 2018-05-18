#include <Maze.h> 

#define SIZE_X 10
#define SIZE_Y 10

char board[SIZE_X][SIZE_Y] = {  
                      {'O','O','O','O','O'},
                      {'O','O','O','O','O'},
                      {'O','O','O','O','O'},
                      {'O','O','O','O','O'},
                      {'O','O','O','O','O'}
                   };
                   
int16_t cursorXPosition = 0;
int16_t cursorYPosition = 0;

void printBoard(char board[SIZE_X][SIZE_Y])
{
    for(int i=0; i<5 ; ++i)
    {
        for(int j=0; j<5 ; ++j)
        {
            Serial.print((char) board[i][j]);
            Serial.print(' ');
        }
        Serial.print('\n');
    }
        
    Serial.println("#######################");    
}

using namespace DisplaySetup;
using namespace DisplayOperation;
using namespace BoardOperation;
using namespace StateOperation;
using namespace Test;

void setup(void) {
    initialize();
    Serial.begin(9600);
}

void loop(void) {
    printBoard(board);
    goUp(board, &cursorXPosition, &cursorYPosition, 'X'); 
    printBoard(board);
    goDown(board, &cursorXPosition, &cursorYPosition, 'X'); 
    printBoard(board);
    goDown(board, &cursorXPosition, &cursorYPosition, 'X'); 
    printBoard(board);
    goRight(board, &cursorXPosition, &cursorYPosition, 'X'); 
    printBoard(board);
    goRight(board, &cursorXPosition, &cursorYPosition, 'X'); 
    printBoard(board);
    goRight(board, &cursorXPosition, &cursorYPosition, 'X'); 
    printBoard(board);
    goDown(board, &cursorXPosition, &cursorYPosition, 'X');  
    printBoard(board);
    goDown(board, &cursorXPosition, &cursorYPosition, 'X'); 
    printBoard(board);
    goLeft(board, &cursorXPosition, &cursorYPosition, 'X');
    printBoard(board); 
    while(1);
}   
