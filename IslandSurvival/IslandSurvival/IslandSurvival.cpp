#include "IslandSurvival.h"


void Play() {
    std::unique_ptr<Player> player = std::make_unique<Player>();
    std::unique_ptr<Inventory> inventory = std::make_unique<Inventory>();
    std::unique_ptr<LogBook> logBook = std::make_unique<LogBook>();

    std::vector<std::unique_ptr<Player>> debugVector;

    for (int i = 0; i < 5000; i++) {
        debugVector.push_back(std::make_unique<Player>());
    }

    std::string choice;

    system("Pause");

    while (!player->IsDead()) {
        std::cout << "Life : " << player->GetHealth() << std::endl;
        std::cout << "Energy : " << player->GetEnergy() << std::endl;

        std::cout << std::endl << std::endl;

        std::cout << "1. Rest" << std::endl;
        std::cout << "2. Gather" << std::endl;
        std::cout << "3. Build" << std::endl;
        std::cout << "4. Research" << std::endl;
        std::cout << "5. See inventory" << std::endl;

        std::cin >> choice;

        int localChoice = std::stoi(choice);

        switch (localChoice) {
        case 1: // Rest
            player->Rest();
            break;
        case 2: // Gather
            inventory->Add("Food", 3);
            inventory->Add("Wood", 1);
            player->ConsumeEnergy(1);
            break;
        case 3: // Build
            break;
        case 4: // Research
            break;
        case 5: // Display Inventory
            inventory->Display();
            break;
        case 6:
            player->TakeDamage(100);
            break;
        default:
            std::cout << "Incorrect number" << std::endl;
            break;
        }

        std::cout << std::endl;
        system("pause");
        system("cls");
        logBook->Register();
    }
}

int main()
{
    system("Pause");
    Play();
    system("Pause");
}