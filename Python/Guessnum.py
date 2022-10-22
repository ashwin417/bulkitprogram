import random

upper_bound=int(input("Enter a number "))

if upper_bound<=0:
    print("Please enter a number that is greater than 0")
    quit()
   
random_num=random.randint(0,upper_bound)
guesses=0

while True:
    guesses+=1
    user_guess=input("Make a guess ")
    if user_guess.isdigit():
        user_guess=int(user_guess)
    else:
        print("Please enter a number next time")
        continue
    if user_guess==random_num:
        print("Congratulations! You got it!")
        break
    elif user_guess>random_num:
        print("You are above the number")
    else:
        print("You are below the number")
print("You got",random_num,"in",guesses,"guesses")
        
