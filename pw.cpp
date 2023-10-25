#include <iostream>
#include <string>
#include <cctype> // Untuk isdigit, isupper, dan islower

bool isStrongPassword(const std::string &password)
{
    // Mengecek panjang password
    if (password.length() < 8)
    {
        return false;
    }

    bool hasDigit = false;
    bool hasUppercase = false;
    bool hasLowercase = false;

    for (char c : password)
    {
        if (std::isdigit(c))
        {
            hasDigit = true;
        }
        else if (std::isupper(c))
        {
            hasUppercase = true;
        }
        else if (std::islower(c))
        {
            hasLowercase = true;
        }
    }

    // Mengecek apakah password mengandung angka, huruf besar, dan huruf kecil
    return hasDigit && hasUppercase && hasLowercase;
}

int main()
{
    std::string password;

    std::cout << "Masukkan password: ";
    std::cin >> password;

    if (isStrongPassword(password))
    {
        std::cout << "Password kuat!" << std::endl;
    }
    else
    {
        std::cout << "Password lemah. Pastikan password memiliki setidaknya 8 karakter, angka, huruf besar, dan huruf kecil." << std::endl;
    }

    return 0;
}
