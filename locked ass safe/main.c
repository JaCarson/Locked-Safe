//
//  main.c
//  locked ass safe
//
//  Created by John Carson on 8/10/16.
//  Copyright © 2016 John Carson. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


void guess() {
   
}


int main(int argc, const char * argv[]) {
    
   
    
    int numberOfGuesses = 0;
    
    
    int firstNumber = 0;
    int secondNumber = 1;
    int thirdNumber = 2;
    int fourthNumber = 3;
    
    
    
    char name[100] = {'\0'};
    
    
    printf("Hello, what is ya name?\n");
    
    
    
    int numberOfItemsScanned = 0;
    numberOfItemsScanned = scanf("%[^\n]s", name);
    
    
    printf("hello %s!\n", name);
    
    printf("Guess the 4 digit combination using 0-3.\n");
    
    
    printf("Enter guess for first number.\n");
    int firstGuess;
    scanf("%d", &firstGuess == guess);
    printf("Enter guess for second number.\n");
    
    int secondGuess;
    scanf("%d", &secondGuess);
    printf("Enter guess for third number.\n");
    
    int thirdGuess;
    scanf("%d", &thirdGuess);
    printf("Enter guess for fourth number.\n");
    
    int fourthGuess;
    scanf("%d", &fourthGuess);
    
    
    if (firstGuess == firstNumber) {
    if (secondGuess == secondNumber) {
    if (thirdGuess == thirdNumber) {
    if (fourthGuess == fourthNumber) {
    
    printf("you've opened the safe?\n");
                    
        } else {
    printf("fourth number is wrong");
                }
       } else {
    printf("third number is wrong");
            }
       } else {
    printf("second number is wrong");
        }
        
       } else {
    printf("first number is wrong\n");
        }
 

    return 0;
    
    
}

    



