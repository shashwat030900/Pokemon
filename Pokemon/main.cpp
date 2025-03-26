    #include <iostream>
    using namespace std;

    int main() {

        string player_name;
        int choice;
        string chosen_pokemon;
        cout << "Enter your name: ";
        cin >> player_name;
        cout << "Great start " << player_name << " looks like you have understood the main() function properly now!" << endl;
        cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
        cout << "You can choose one of the following Pokémon:\n";
        cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
        cout << "Which Pokémon would you like to choose? Enter the number: ";
        cin >> choice;

        switch (choice) {

        case 1:
            chosen_pokemon = "Charmander";
            cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;

        case 2:
            chosen_pokemon = "Bulbasaur";
            cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
            break;

        case 3:
            chosen_pokemon = "Squirtle";
            cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
            break;

        default:
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            chosen_pokemon = "Pikachu"; 
            cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
            break;

        }
        cout << "Professor Oak: " << chosen_pokemon << " and you, "
            << player_name << ", are going to be the best of friends!\n";
        cout << "Professor Oak: Your journey begins now! Get ready to explore "
            "the vast world of Pokemon!\n";


        return 0;
    }
