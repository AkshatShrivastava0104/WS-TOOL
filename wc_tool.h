#ifndef WC_TOOL_H
#define WC_TOOL_H

#include <string>

class WCTool {
public:
    WCTool(const std::string& filename);
    void count();
    void printCounts() const;

private:
    std::string m_filename;  
    int m_wordCount;
    int m_lineCount;
    int m_charCount;
};

#endif // WC_TOOL_H
