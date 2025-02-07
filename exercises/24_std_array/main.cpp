#include "../exercise.h"
#include <array>
#include <cstring>

// READ: std::array <https://zh.cppreference.com/w/cpp/container/array>

// TODO: 将下列 `?` 替换为正确的代码
int main(int argc, char **argv) {
    {
std::array<int, 5> arr{{1, 2, 3, 4, 5}};
ASSERT(arr.size() == 5, "Fill in the correct value."); // size 是 5
ASSERT(sizeof(arr) == sizeof(int) * 5, "Fill in the correct value."); // sizeof(arr) 是 5 * sizeof(int)
int ans[]{1, 2, 3, 4, 5};
ASSERT(std::memcmp(arr.data(), ans, sizeof(arr)) == 0, "Fill in the correct values."); // 使用 arr.data() 获取底层指针
    }
    {
std::array<double, 8> arr;
ASSERT(arr.size() == 8, "Fill in the correct value."); // size 是 8
ASSERT(sizeof(arr) == sizeof(double) * 8, "Fill in the correct value."); // sizeof(arr) 是 8 * sizeof(double)
    }
    {
std::array<char, 21> arr{"Hello, InfiniTensor!"};
ASSERT(arr.size() == 21, "Fill in the correct value."); // size 是 21
ASSERT(sizeof(arr) == sizeof(char) * 21, "Fill in the correct value."); // sizeof(arr) 是 21 * sizeof(char)
ASSERT(std::strcmp(arr.data(), "Hello, InfiniTensor!") == 0, "Fill in the correct value."); // 使用 arr.data() 获取底层指针
    }
    return 0;
}
