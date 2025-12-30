#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int User, AI;
    int max, num1, num2;
    cout << "please enter a number to starting the game: \n";
    cin >> max;
    cout << "pleaes enter two number for chossing each time: .\n";
    cin >> num1 >> num2;
    cout << "Whoever reaches"<< max << "wins\n\n";

    while(true)
    {
        // Player turn
        cout << "Current sum: " << sum << endl;
        cout << "Your move (1 or 2): ";
        cin >> User;

        if User != 1 && User != 2)
            {
                cout << "Invalid move! Choose 1 or 2.\n";
                continue;
            }

        sum += User;

        if (sum >= 20)
        {
            cout << "🎉 You win!\n";
            break;
        }

        // AI turn
        if (sum % 3 == 0)
            AI = 1;
        else
            AI = 3 - (sum % 3);

        cout << "AI chooses: " << AI << endl;
        sum += AI;

        if (sum >= 20)
        {
            cout << "🤖 AI wins!\n";
            break;
        }
    }

    return 0;
}