#include <type_traits>
int main(int argc, char *argv[])
{
    // this one will fail
    //static_assert(sizeof(int) >= 8, "int size lower than 64 bits");
    static_assert(sizeof(int) == 4, "int size is not 32 bits");

    struct S {
        int a;
    };

    static_assert(std::is_pod<S>::value, "S is not pod");
}

