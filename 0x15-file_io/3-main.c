#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for the cp program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Call the copy function defined in 3-cp.c */
    if (cp(argv[1], argv[2]) == -1)
    {
        exit(98);
    }

    return (0);
}

