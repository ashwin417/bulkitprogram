import random

def game(user_choice):

    list1=["stone","paper","scissors"]

    user_score=0

    comp_score=0

    computer_choice=random.choice(list1)

    print("\n Your choice:",user_choice,"\nComputer's choice:",computer_choice)

    if user_choice == computer_choice:

        print("Both players selected",user_choice,". It's a tie!")

    elif user_choice == "rock":

        if computer_choice == "scissors":

            print("Rock smashes scissors! You win!")

            user_score+=1

        else:

            print("Paper covers rock! You lose.")

            comp_score+=1

    elif user_choice == "paper":

        if computer_choice == "rock":

            print("Paper covers rock! You win!")

            user_score+=1

        else:

            print("Scissors cuts paper! You lose.")

            comp_score=comp_score+1

    elif user_choice == "scissors":

        if computer_choice == "paper":

            print("Scissors cuts paper! You win!")

            user_score+=1

        else:

            print("Rock smashes scissors! You lose.")

            comp_score+=1

    

    return comp_score,user_score

def play(count):

    c_score=0

    u_score=0

    while(count>0):

        user_choice = input("Enter a choice (rock, paper, scissors): ")

        if user_choice=="rock" or user_choice=="paper" or user_choice=="scissors":

            comp_score,user_score=game(user_choice)

            c_score=c_score+comp_score

            u_score=u_score+user_score

        else:

            print("Choose from the available options.\n")

        count=count-1

    return c_score,u_score

class rock_paper_scissors:

    count=int(input("How many times do you want to play:")) 

    comp_score,user_score=play(count)

    if comp_score>user_score:

	    print("COMPUTER WINS!!!\n Comp_Score:",comp_score,"\n Your_Score",user_score)    elif comp_score==user_score:

        print("IT'S A TIE!!!\n Comp_Score:",comp_score,"\n Your_Score",user_score)

    else:

	    print("YOU WIN!!!\n Comp_Score:",comp_score,"\n Your_Score",user_score)
