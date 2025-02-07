#include "../exercise.h"
#include <cstring>
#include <vector>

// READ: std::vector <https://zh.cppreference.com/w/cpp/container/vector>

// TODO: 将下列 `?` 替换为正确的代码
int main(int argc, char **argv) {
    {
        std::vector<int> vec{1, 2, 3, 4, 5};
ASSERT(vec.size() == 5, "Fill in the correct value."); // size 是 5
ASSERT(sizeof(vec) == sizeof(std::vector<int>), "Fill in the correct value."); // sizeof(vec) 是 vector 对象本身的大小
int ans[]{1, 2, 3, 4, 5};
ASSERT(std::memcmp(vec.data(), ans, sizeof(ans)) == 0, "Fill in the correct values."); // 使用 vec.data() 获取底层指针
    }
    {
        std::vector<double> vec{1, 2, 3, 4, 5};
{
    ASSERT(vec.size() == 5, "Fill in the correct value."); // size 是 5
    ASSERT(sizeof(vec) == sizeof(std::vector<double>), "Fill in the correct value."); // sizeof(vec) 是 vector 对象本身的大小
    double ans[]{1, 2, 3, 4, 5};
    ASSERT(std::memcmp(vec.data(), ans, sizeof(ans)) == 0, "Fill in the correct values."); // 使用 vec.data() 获取底层指针
}
{
    vec.push_back(6);
    ASSERT(vec.size() == 6, "Fill in the correct value."); // size 是 6
    ASSERT(sizeof(vec) == sizeof(std::vector<double>), "Fill in the correct value."); // sizeof(vec) 是 vector 对象本身的大小
    vec.pop_back();
    ASSERT(vec.size() == 5, "Fill in the correct value."); // size 是 5
    ASSERT(sizeof(vec) == sizeof(std::vector<double>), "Fill in the correct value."); // sizeof(vec) 是 vector 对象本身的大小
}
{
    vec[4] = 6;
    ASSERT(vec[0] == 1, "Fill in the correct value.");
    ASSERT(vec[1] == 2, "Fill in the correct value.");
    ASSERT(vec[2] == 3, "Fill in the correct value.");
    ASSERT(vec[3] == 4, "Fill in the correct value.");
    ASSERT(vec[4] == 6, "Fill in the correct value.");
}
{
    vec.insert(vec.begin() + 1, 1.5); // 在索引 1 处插入 1.5
    ASSERT((vec == std::vector<double>{1, 1.5, 2, 3, 4, 6}), "Make this assertion pass.");
    vec.erase(vec.begin() + 2); // 删除索引 2 的元素
    ASSERT((vec == std::vector<double>{1, 1.5, 3, 4, 6}), "Make this assertion pass.");
}
{
    vec.shrink_to_fit();
    ASSERT(vec.capacity() == vec.size(), "Fill in the correct value."); // shrink_to_fit 后 capacity == size
    vec.clear();
    ASSERT(vec.empty(), "`vec` is empty now.");
    ASSERT(vec.size() == 0, "Fill in the correct value."); // size 是 0
    ASSERT(vec.capacity() >= 0, "Fill in the correct value."); // capacity 是 0
}
    }
    {
std::vector<char> vec(48, 'z'); // 调用构造函数，初始化 48 个 'z'
ASSERT(vec[0] == 'z', "Make this assertion pass.");
ASSERT(vec[47] == 'z', "Make this assertion pass.");
ASSERT(vec.size() == 48, "Make this assertion pass.");
ASSERT(sizeof(vec) == sizeof(std::vector<char>), "Fill in the correct value."); // sizeof(vec) 是 vector 对象本身的大小
{
    auto capacity = vec.capacity();
    vec.resize(16); // 缩小到 16 个元素
    ASSERT(vec.size() == 16, "Fill in the correct value."); // size 是 16
    ASSERT(vec.capacity() == capacity, "Fill in a correct identifier."); // capacity 不变
}
{
    vec.reserve(256); // 预留 256 个元素的空间
    ASSERT(vec.size() == 16, "Fill in the correct value."); // size 仍然是 16
    ASSERT(vec.capacity() == 256, "Fill in the correct value."); // capacity 是 256
}
{
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');
    vec.push_back('d');
    ASSERT(vec.size() == 20, "Fill in the correct value."); // size 是 20
    ASSERT(vec.capacity() == 256, "Fill in the correct value."); // capacity 是
    }}

    return 0;
}
