#Lets"s play rock paper scissors
import random
from webbrowser import Elinks 
user_wins = 0
comp_wins = 0

options = ["rock", "paper","scissors"]

while True:
    user_input = input("Type rock/paper/scissors or q for quit \t ").lower()

    if user_input =="q":
        break
    if user_input not in options:
        continue

    random_number = random.randint(0,2)
    computer_pick = options[random_number]
    print("Computer picked",computer_pick +".")

    if user_input=="rock" and computer_pick=="scissors":
        print("You won !!..")
        user_wins+=1
    elif user_input=="paper" and computer_pick=="rock":
        print("You won !!..")
        user_wins+=1
    elif user_input=="scissors" and computer_pick == "paper":
        user_wins+=1
    else:
        print("You lost !!..")
        comp_wins+=1
print("You won ",user_wins," times")      
print("Computer won ",comp_wins, " times")
print("Goodbye!!.")
    
