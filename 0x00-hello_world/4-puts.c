#!/bin/bash
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
    char *message = "Programming is like building a multilingual puzzle\n";
    ssize_t len = 47;  // Length of the message

    /* Use write function to print the message to standard output (stdout) */
    write(STDOUT_FILENO, message, len);

    return (0);
}
