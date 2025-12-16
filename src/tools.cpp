#include "tools.h"

void tools::log_message(const std::string& message, int type) {
    switch (type)
    {
    case 0:
        std::cerr << "[LOG] " << message << std::endl;
        break;
    case 1:
        std::cerr << "[WARN] " << message << std::endl;
        break;
    case 2:
        std::cerr << "[FATAL] " << message << std::endl;
        break;
    default:
        break;
    }
    return;
}