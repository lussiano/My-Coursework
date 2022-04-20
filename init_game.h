//
// Created by udii on 2022-04-16.
//
typedef struct _Board{
    int col;
    int row;
    int step;
    int **cell;
}Board;

Board* create_game (const char *file,Board *theBoard);
Board* UpdateCell(Board* theBoard);
void PrintCell(Board* theBoard);