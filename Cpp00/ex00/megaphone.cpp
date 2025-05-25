#include <iostream>

int ft_isalphanum(char c)
{
    if ((c > 35 && c < 90) || (c >= 97 && c <= 123))
    {
        if (c > 96 && c < 124)
            return -32;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
        for(int j = 0; argv[i][j]; j++)
            std::wcout << (char)(argv[i][j] + ft_isalphanum(argv[i][j]));
    std::wcout << "\n";
    return 0;
}
