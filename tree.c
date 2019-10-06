/*
** EPITECH PROJECT, 2019
** tree
** File description:
** tree
*/

void my_putchar(char c);

int wrong_number(int size)
{
    if (size <= 0)
        return (0);
}

void base(int size)
{
    for (int b = 0; b < size; b++) {
        my_putchar('\n');
        my_putchar('|');
    }
}

void star(int floor)
{
    int floor_stocked = floor;
    for (int a = 0; a < floor + 1; a++) {
        for (int i = 0; i < floor_stocked; i++) {
            my_putchar('*');
        }
        my_putchar('\n');
        floor_stocked = floor_stocked - 2;
    }
}

void tree(int size)
{
    int floor = 7;

    wrong_number(size);

    for (int a = 0; a < size; a++) {
        star(floor);
    }
    base(size);
}
