#include "wc_tool.h"
#include <fstream>
#include <iostream>
#include <sstream>

WCTool::WCTool(const std::string& filename)
    : m_filename(filename), m_wordCount(0), m_lineCount(0), m_charCount(0) {}

void WCTool::count() {
    std::ifstream file(m_filename);
    if (!file.is_open()) {
        std::cerr << "Could not open the file: " << m_filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        m_lineCount++;
        m_charCount += static_cast<int>(line.length()) + 1; // +1 for the newline character

        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            m_wordCount++;
        }
    }

    file.close();
}

void WCTool::printCounts() const {
    std::cout << "Lines: " << m_lineCount << std::endl;
    std::cout << "Words: " << m_wordCount << std::endl;
    std::cout << "Characters: " << m_charCount << std::endl;
}