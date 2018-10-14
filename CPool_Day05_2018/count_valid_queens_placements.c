/*
** EPITECH PROJECT, 2018
** count_valid_queens_placements
** File description:
** n queen solution
*/
int board[20], count;

int count_valid_queens_placements(int n)
{
    queen(1, n);
    return count;
}

int haveplace(int row, int column)
{
    int i;
    for (i = 1; i <= row - 1; ++i) {
        if (board[i] == column)
            return 0;
        else if (absoluteval(board[i] - column) == absoluteval(i - row))
            return 0;
    }

    return 1;
}

void queen(int row, int n)
{
    int column;
    for (column = 1; column <= n; ++column) {
        if (haveplace(row, column)) {
            board[row] = column;
            if (row == n)
                count++;
            else
                queen(row + 1, n);
        }
    }
}

int absoluteval(int val)
{
    if (val >= 0)
        return val;
    else
        return -val;
}