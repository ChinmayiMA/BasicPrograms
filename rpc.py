import random
def play_game():
    choices = ["rock", "paper", "scissors"]
    print("--- Welcome to Rock, Paper, Scissors! ---")
    
    while True:
        # Get player choice
        user_choice = input("Enter rock, paper, or scissors (or 'quit' to stop): ").lower()
        
        if user_choice == "quit":
            print("Thanks for playing! Goodbye.")
            break
            
        if user_choice not in choices:
            print("Invalid choice. Please try again.\n")
            continue
            
        # Get computer choice
        computer_choice = random.choice(choices)
        print(f"Computer chose: {computer_choice}")
        
        # Determine the winner
        if user_choice == computer_choice:
            print("It's a tie!\n")
        elif (user_choice == "rock" and computer_choice == "scissors") or \
             (user_choice == "paper" and computer_choice == "rock") or \
             (user_choice == "scissors" and computer_choice == "paper"):
            print("You win! 🎉\n")
        else:
            print("Computer wins! 🤖\n")
# Run the game
play_game()