#include "ItemTracker.h"

int main() {
    // Create an ItemTracker object and read from input file
    ItemTracker tracker("CS210_Project_Three_Input_File.txt");

    // Write frequencies to backup file
    tracker.WriteFrequenciesToFile("frequency.dat");

    int option;
    do {
        // Display menu options
        std::cout << "Menu Options:" << std::endl;
        std::cout << "1. Get frequency of a specific item" << std::endl;
        std::cout << "2. Print all item frequencies" << std::endl;
        std::cout << "3. Print histogram of item frequencies" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> option;

        switch (option) {
            case 1: {
                // Option 1: Get frequency of a specific item
                std::string item;
                std::cout << "Enter the item: ";
                std::cin >> item;
                int frequency = tracker.GetFrequency(item);
                std::cout << item << " frequency: " << frequency << std::endl;
                break;
            }
            case 2: {
                // Option 2: Print all item frequencies
                tracker.PrintAllFrequencies();
                break;
            }
            case 3: {
                // Option 3: Print histogram of item frequencies
                tracker.PrintHistogram();
                break;
            }
            case 4: {
                // Option 4: Exit
                std::cout << "Exiting program." << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
            }
        }
    } while (option != 4);

    return 0;
}
