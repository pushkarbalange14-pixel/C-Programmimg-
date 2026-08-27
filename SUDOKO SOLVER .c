#include <stdio.h>

#define N 9

void printBoard(int board[N][N])
{
    int i, j;

    printf("\nSolved Sudoku:\n");

    for (i = 0; i < N; i++)
    {
        if (i % 3 == 0 && i != 0)
            printf("---------------------\n");

        for (j = 0; j < N; j++)
        {
            if (j % 3 == 0 && j != 0)
                printf("| ");

            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int isSafe(int board[N][N], int row, int col, int num)
{
    int i, startRow, startCol;

    /* Check row */
    for (i = 0; i < N; i++)
    {
        if (board[row][i] == num)
            return 0;
    }

    /* Check column */
    for (i = 0; i < N; i++)
    {
        if (board[i][col] == num)
            return 0;
    }

    /* Check 3 x 3 box */
    startRow = row - row % 3;
    startCol = col - col % 3;

    for (i = 0; i < 3; i++)
    {
        int j;

        for (j = 0; j < 3; j++)
        {
            if (board[startRow + i][startCol + j] == num)
                return 0;
        }
    }

    return 1;
}

int findEmptyCell(int board[N][N], int *row, int *col)
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (board[i][j] == 0)
            {
                *row = i;
                *col = j;
                return 1;
            }
        }
    }

    return 0;
}

int solveSudoku(int board[N][N])
{
    int row, col, num;

    /* If no empty cell exists, Sudoku is solved */
    if (!findEmptyCell(board, &row, &col))
        return 1;

    for (num = 1; num <= 9; num++)
    {
        if (isSafe(board, row, col, num))
        {
            board[row][col] = num;

            /* Recursively solve remaining cells */
            if (solveSudoku(board))
                return 1;

            /* Backtracking */
            board[row][col] = 0;
        }
    }

    return 0;
}

int main()
{
    int board[N][N] =
    {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},

        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},

        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    printf("Original Sudoku:\n");
    printBoard(board);

    if (solveSudoku(board))
    {
        printBoard(board);
    }
    else
    {
        printf("\nNo solution exists.\n");
    }

    return 0;
}
