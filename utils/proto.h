#ifndef PROTO.H
#define PROTO.H

#include <string>

//颜色
const std::string RESET = "\033[0m";
const std::string BLACK = "\033[30m";
const std::string RED = "\033[31m";
const std::string EXCLAMATION = "\033[1;31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";

//enter c
void enter_c() {
    std::cout << YELLOW << "按下回车到下一步吧！" << RESET << std::endl;
    string temp;
    std::getline(std::cin, temp);
}
#endif