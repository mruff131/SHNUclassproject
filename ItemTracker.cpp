#include "ItemTracker.h"

// Constructor
ItemTracker::ItemTracker(const std::string& inputFileName) {
    std::ifstream inputFile(inputFileName);
    std::string item;

    if (inputFile.is_open()) {
        while (std::getline(inputFile, item)) {
            itemFrequency[item]++;
        }
        inputFile.close();
    } else {
        std::cerr << "Unable to open file " << inputFileName << std::endl;
    }
}

// Get the frequency of a specific item
int ItemTracker::GetFrequency(const std::string& item) const {
    auto it = itemFrequency.find(item);
    if (it != itemFrequency.end()) {
        return it->second;
    }
    return 0;
}

// Print all items and their frequencies
void ItemTracker::PrintAllFrequencies() const {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

// Print histogram of item frequencies
void ItemTracker::PrintHistogram() const {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Write frequencies to a backup file
void ItemTracker::WriteFrequenciesToFile(const std::string& outputFileName) const {
    std::ofstream outputFile(outputFileName);
    if (outputFile.is_open()) {
        for (const auto& pair : itemFrequency) {
            outputFile << pair.first << " " << pair.second << std::endl;
        }
        outputFile.close();
    } else {
        std::cerr << "Unable to open file " << outputFileName << std::endl;
    }
}
