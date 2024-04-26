#include "iostream"
#include "spdlog/spdlog.h"
#include "common.h"

int main() {
    int i = 3145;
    spdlog::info("{}", example::ToString(i));
    return 0;
}