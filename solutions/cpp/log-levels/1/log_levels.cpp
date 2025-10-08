#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int f = line.find(":");
    return line.substr(f+2);
}

std::string log_level(std::string line) {
    // return the log level
    int f = line.find("]")-1;
    return line.substr(1,f);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
