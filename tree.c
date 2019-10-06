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
    int half = size;
}

void star(int floor)
{
    for (int a = 0; a < floor; a++) {
        for (int i = floor; i > 0; i--) {
          my_putchar('*');
        }
        my_putchar('\n');
    }
}

void tree(int size)
{
    int floor = 7;

    wrong_number(size);

    for (int a = 0; a < size; a++) {
        star(floor);
    }
}
