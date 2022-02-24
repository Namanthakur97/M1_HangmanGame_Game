# Testing/Evaluation Plan

For this particular game, there will not be any specific test case except that, I will have to check whether the code works correctly or not for the words which are to be guessed. Also, by giving wrong letters more than the number of chances, the user is declared the loser.

# High Level  

|  TEST ID  |  DESCRIPTION  |  EXP I/P  |  EXP O/P  |  ACTUAL O/P  | PASS/FAIL |
|:---------:|:-------------:|:---------:|:---------:|:------------:|:---------:|
| H01       | Check if the code is working as expected | Valid I/P | Correct O/P | Correct O/P | PASS |
| H02       | Check if system handles numbers or not   | Inalid I/P | Terminating | Terminate | PASS |
| H03       | Check for flow control Jumpling          | For Valid I/P | Jumping Correctly | Jumping Correctly | PASS |
| H04       | Check for flow control Jumpling          | For Invalid I/P | Terminating | Terminate | PASS |

# Low Level Test Plan

1. First of all I have to check that all the header files are working or not.
2. We have to check the no. of mistakes it takes
3. Words repeated or not
4. Giving correct output
5. Check if the code is working properly or not.

| TEST ID | DESCRIPTION | EXP O/P | ACTUAL O/P | PASS/FAIL |
|:-------:|:-----------:|:-------:|:----------:|:---------:|
| L01     | Header Files check | Correct | Correct | PASS |
| L02     | Attempts total 6 | Correct  | Correct | PASS |
| L03     | No Repeated Words | Valid | Valid | PASS |
| L04     | Correct Output | Valid | Valid | PASS |
| L05     | Code Working | Correct | Correct | PASS |

# For example:-
Word: _ A N _ _ A N Guess: H Misses: 	e,i,o,s,t 
Word: H A N _ _ A N Guess: R Misses: e,i,o,s,t 
Word: H A N _ _ A N Guess: N/A Misses: e,i,o,r,s,t 

After all the chances that you’ve guessed wrong you will get a message:

**Oops! The word was HANGMAN.**

