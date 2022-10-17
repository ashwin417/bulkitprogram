import random
user_point=0
computer_point=0
options=["rock","paper","scissor"]
while True: 
    user_input=input("Type ROCK/PAPER/SCISSORS OR Q To quit: ").lower()
    if user_input == "q":
        break
    if user_input not in options:
        continue
    random_no=random.randint(0,2) 
    computer_input=options[random_no] # 0:rock,1:paper,2:scissors
    print("Computer picked",computer_input)
    if user_input=="rock" and computer_input=="scissor":
        print("You wins!")
        user_point+=1
    elif user_input=="paper" and computer_input=="rock":
        print("You wins!")
        user_point+=1
    elif user_input=="scissor" and computer_input=="paper":
        print("You wins!")
        user_point+=1
    elif user_input==computer_input:
        print("Both picked same!")
    else:
        print("Computer wins!")
        computer_point+=1
print("You won",user_point,"times")
print("Computer won",computer_point,"times")
print("Exiting...")
