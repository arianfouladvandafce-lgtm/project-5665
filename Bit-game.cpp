#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int playerMove, aiMove;

    cout << "Game of 20 (Player vs AI)\n";
    cout << "You can choose 1 or 2 each turn.\n";
    cout << "Whoever reaches 20 wins.\n\n";

    while (true) {
        // Player turn
        cout << "Current sum: " << sum << endl;
        cout << "Your move (1 or 2): ";
        cin >> playerMove;

        if (playerMove != 1 && playerMove != 2) {
            cout << "Invalid move! Choose 1 or 2.\n";
            continue;
        }

        sum += playerMove;

        if (sum >= 20) {
            cout << "🎉 You win!\n";
            break;
        }

        // AI turn
        if (sum % 3 == 0)
            aiMove = 1;
        else
            aiMove = 3 - (sum % 3);

        cout << "AI chooses: " << aiMove << endl;
        sum += aiMove;

        if (sum >= 20) {
            cout << "🤖 AI wins!\n";
            break;
        }
    }

    return 0;
}