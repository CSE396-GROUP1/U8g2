#ifndef _MAZE_H_
#define _MAZE_H_

#include <U8g2lib.h>

#pragma region DEFINITONS
#define WIDTH 128
#define HEIGHT 64
#define ROW 10
#define COL 10

typedef enum STATE 
{
    DRAW,
    DRAW_CONTINUE,
    NEW_CONNECTION,
    RECONNECTION,
    FINISH,
    RESTART,
    EXCHANGE,
    READY_MAP,
    GAME_OVER,
    READY_GAME
};
#pragma endregion DEFINITONS

#pragma region NAMESPACES

namespace DisplaySetup 
{
    void initialize(void);
    void splashScreen(const char *splashText);
}

namespace DisplayOperation
{
    void clearDisplay(void);
}

namespace BoardOperation
{
    void emptyRectangle(int16_t startX, int16_t startY, int16_t endX, int16_t endY);
    void fullRectangle(int16_t startX, int16_t startY, int16_t endX, int16_t endY);
    void displayBoard(const int16_t numberOfRow, 
                    const int16_t numberOfColumn,
                    const char board[][COL], 
                    const char fullCell,
                    const int16_t cursorXPosition,
                    const int16_t cursorYPosition,
                    const int8_t isCursorActive);
    void drawBoard(char board[][COL], int rowNumber, int colNumber, int startX, int startY);                
}

namespace StateOperation
{
    void changeState(const char *stateName);
    void load(void);
    void unload(void);
    void finishGame(const char *str);
}

namespace Test
{
    void runTests(void);
    void drawBoardTest(void);
}

#pragma endregion NAMESPACES

#endif