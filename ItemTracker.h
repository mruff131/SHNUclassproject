#ifndef ITEM_TRACKER_H
#define ITEM_TRACKER_H

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class ItemTracker {
private:
    std::map<std::string, int> itemFrequency;

public:
    // Constructor
    ItemTracker(const std::string& inputFileName);

    // Get the frequency of a specific item
    int GetFrequency(const std::string& item) const;

    // Print all items and their frequencies
    void PrintAllFrequencies() const;

    // Print histogram of item frequencies
    void PrintHistogram() const;

    // Write frequencies to a backup file
    void WriteFrequenciesToFile(const std::string& outputFileName) const;
};

#endif // ITEM_TRACKER_H
