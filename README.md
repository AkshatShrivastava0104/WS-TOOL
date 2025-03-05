
# WC-TOOL

The Word Count (WC) tool is a C++-based utility that takes a text input and produces a report on the number of words it contains. The tool aims to provide a simple and efficient way to count words in a given text, making it useful for various applications such as text analysis, editing, and research.


The following features are proposed for the WC tool:

 
Word Counting: The tool will count the total number of words in the input text.

    
Unique Word Counting: The tool will count the number of unique words in the input text.


Word Frequency: The tool will display the frequency of each word in the input text.


Input Methods: The tool will accept input from

- A file


- Standard input (e.g., keyboard)


- A string variable




Output Options: The tool will provide options for outputting the results, including displaying the results on the console.
## Features

- Count the number of lines in a text file.
- Count the number of words in a text file.
- Count the number of characters in a text file.

## Requirements

- C++ compiler (e.g., g++)
## Installation

1. Clone the repository or download the source code.

```bash
git clone https://github.com/your-username/WC-TOOL.git
```

2. Navigate to the project directory.
```bash
cd WC-TOOL
```

3. Execute the following commands in the terminal.

```bash
g++ -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 -Wcast-align -Wconversion -Wsign-conversion -Wnull-dereference -g3 -O0 -c main.cpp -o main.o

```
```bash
g++ -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 -Wcast-align -Wconversion -Wsign-conversion -Wnull-dereference -g3 -O0 -c wc_tool.cpp -o wc_tool.o
```

```bash
g++ -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 -Wcast-align -Wconversion -Wsign-conversion -Wnull-dereference -g3 -O0 main.o wc_tool.o -o wc_tool
```
## 

4. To Execute the program, Go to Terminal and write

```bash
./wc_tool Demo.txt
```


## Screenshots




## Badges

Add badges from somewhere like: [shields.io](https://shields.io/)

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)


[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)


[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)

