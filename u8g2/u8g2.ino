#include <Maze.h> 

using namespace DisplaySetup;
using namespace DisplayOperation;
using namespace BoardOperation;
using namespace StateOperation;
using namespace Test;

char board[ROW][COL];             
int16_t cursorXPosition = 10;
int16_t cursorYPosition = 0;
int8_t isCursorActive = 1;

void printBoard(char board[ROW][COL]);
void makeTestMove(void);

void setup(void) 
{
    initialize();
    Serial.begin(9600);
}

void loop(void) 
{
    initializeBoard(board);
    makeTestMove();
    
    goRight(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goRight(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goRight(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goRight(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goRight(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goRight(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goLeft(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goUp(board, &cursorXPosition, &cursorYPosition);
    makeTestMove();
    
    goLeft(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goLeft(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();

    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goLeft(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();

    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    goLeft(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();

    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();

    goUp(board, &cursorXPosition, &cursorYPosition); 
    makeTestMove();
    
    while(1);
}   

void printBoard(char board[ROW][COL])
{
    for(int i=0; i<ROW ; ++i)
    {
        if(i!=ROW-1)
            Serial.print(' ');
        else
            Serial.print('[');
        for(int j=0; j<COL; ++j)
        {
            Serial.print((char) board[i][j]);
            if(j!=COL-1)
                Serial.print(' ');
        }
        if(i!=ROW-1)
            Serial.print(' ');
        else
            Serial.print(']');
        Serial.print('\n');
    }
        
    Serial.println("#######################");    
}

void makeTestMove(void)
{
    displayBoard(board, cursorXPosition, cursorYPosition, isCursorActive);
    
    changeCursorState(&isCursorActive);
    delay(500);
    displayBoard(board, cursorXPosition, cursorYPosition, isCursorActive);
    
    changeCursorState(&isCursorActive);
    delay(500);
    displayBoard(board, cursorXPosition, cursorYPosition, isCursorActive);
    
}
