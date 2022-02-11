# Testing/Evaluation Plan

For this particular game, there will not be any specific test case except that, I will have to check whether the code works correctly or not for the words which are to be guessed. Also, by giving wrong letters more than the number of chances, the user is declared the loser.

# High Level and Low Level Test Plan

1. First of all I have to check that all the header files are working or not.
2. We have to check the no. of mistakes it takes
3. Words repeated or not
4. Giving correct output
5. Check if the code is working properly or not.

|    TEST                 |      RESULT              |
------------------------------------------------------
|  Header Files           |     Working              |
|  Attempts total 6       |     Working              |
|  No Repeated Words      |     Working              |
|  Correct Output         |     Working              |
|  Code Working           |     Working              |

# For example:-
Word: _ A N _ _ A N Guess: H Misses: 	e,i,o,s,t 
Word: H A N _ _ A N Guess: R Misses: e,i,o,s,t 
Word: H A N _ _ A N Guess: N/A Misses: e,i,o,r,s,t 

After all the chances that you’ve guessed wrong you will get a message:

**Oops! The word was HANGMAN.**

