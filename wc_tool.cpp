#include <iostream>
#include "wc_tool.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    WCTool wcTool(argv[1]);
    wcTool.count();
    wcTool.printCounts();

    return 0;
}