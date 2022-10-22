#Project

x = 8                                                                                                                       #assigning the original number to a variable
print(" Let's play a game! ")                                                                                               #displays a message
y = input(" If you are ready,please press the enter key")                                                                   #accepts a value as ready to play from the user
z = int(input(" Note:Secret number should be in between 0 to 7 \n Enter your secret number: "))                             #accepting the secret number to a variable
x = x + z                                                                                                                   #number to be guessed is the sum of the original number and secret number
print(" The game starts! \n Guess the number within the 4 chances \n Hint:The number is in between 0 to 15 ")               #displays a message on the screen
a = int()                                                                                                                   #defines the value of variable 'a' before the function definition
def number(a,x):                                                                                                            #defines a function 'number'
    for i in range(3):                                                                                                      #declaring a loop to be executed 3 times
        a = int(input(" Enter your guess: "))                                                                               #reads the guess from the user
        if a < x:                                                                                                           #checks whether the guess is less than the original number
            print(" Your guess is less than the actual number \n You have only ", 3-i ," chance left,Try again! ")          #displays the message if the condition is true         
        elif a > x:                                                                                                         #checks whether the guess is greater than the original number
            print(" Your guess is greater than the original number \n You have only ", 3-i ," chance left,Try again! ")     #displays the message if the condition is true
        else:                                                                                                               #checks whether the guess and the original number is equal
            print(" Hurrah! You won the game within ", i+1 ," try. ")                                                       #displays the message if the condition is true
            break                                                                                                           #terminates the loop if the original number is equal to the guess
    if a != x:                                                                                                              #it executes the following statements if the original number and the guesses are not equal after the 3 iterations
        a = int(input(" Enter your last guess: "))                                                                          #reads the 4th guess from the user
        if a != x:                                                                                                          #checks whether the original number and the guess are not equal 
            print(" Oops!You lost the game \n Better luck next time! ")                                                     #displays the message if the condition is true
        else:                                                                                                               #checks whether the original number and the guess are equal 
            print(" Congrats!You won the game ")                                                                            #displays the message if the condition is true
number(a,x)                                                                                                                 #calling the function 'number' 

