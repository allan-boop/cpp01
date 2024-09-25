#include <iostream>
#include <fstream>
#include <sstream>

typedef std::string str;

void replaceOccurrences(str &content, const str &s1, const str &s2) {
    if (s1.empty()) {
        std::cerr << "Error: The string to be replaced (s1) cannot be empty." << std::endl;
        return;
    }
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != str::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    str filename = argv[1];
    str s1 = argv[2];
    str s2 = argv[3];

    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    str content = buffer.str();
    inputFile.close();

    replaceOccurrences(content, s1, s2);

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Could not create file " << filename << ".replace" << std::endl;
        return 1;
    }

    outputFile << content;
    outputFile.close();

    return 0;
}
