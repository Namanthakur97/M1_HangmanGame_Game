/**
 * @file hangman.c
 * @author Naman Thakur (namanthakur97@gmail.com)
 * @brief Hangman Game
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define WORDS 10
#define WORDLEN 40
#define CHANCE 6