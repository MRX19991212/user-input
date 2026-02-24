#include <iostream>
#include <string>
#include <unordered_map>


std::string fixLayout(std::string& text) {
    std::string result;

    for (int i = 0; i < text.length(); i++ ){

        if (text[i] == 'q') text[i] = 'й';
            else if (text[i] == 'w') text[i] = 'ц';
            else if (text[i] == 'e') text[i] = 'у';
    }
    return text;
}
int main () {
    std::string input;
    std::getline(std::cin, input);
    std::cout << fixLayout(input) << std::endl;

    return 0;
}
