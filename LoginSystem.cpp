#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to check if the password is strong
bool isStrongPassword(const string &password)
{
    if (password.length() < 8)
    {
        cout << "Password is too short." << endl;
        return false;
    }

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    int i = 0;

    while (i < password.length())
    {
        char ch = password[i];
        if (isupper(ch))
            hasUpper = true;
        if (islower(ch))
            hasLower = true;
        if (isdigit(ch))
            hasDigit = true;
        if (ispunct(ch))
            hasSpecial = true;
        i++;
    }

    // Debug output to see which conditions are not met
    if (!hasUpper)
        cout << "Password does not have an uppercase letter." << endl;
    if (!hasLower)
        cout << "Password does not have a lowercase letter." << endl;
    if (!hasDigit)
        cout << "Password does not have a digit." << endl;
    if (!hasSpecial)
        cout << "Password does not have a special character." << endl;

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

// Function to validate the username
bool isValidUsername(const string &username)
{
    if (username.length() < 5)
        return false;

    int i = 0;
    while (i < username.length())
    {
        char ch = username[i];
        if (!isalnum(ch) && ch != '_')
            return false;
        i++;
    }

    return true;
}

int main()
{
    string username, password;
    string correctUsername = "admin";
    string correctPassword = "Admin@1234";

    // Input and validate username
    cout << "Enter username: ";
    cin >> username;
    while (!isValidUsername(username))
    {
        cout << "Invalid username. It must be at least 5 characters long and contain only alphanumeric characters or underscores." << endl;
        cout << "Enter username: ";
        cin >> username;
    }

    // Input and validate password
    cout << "Enter password: ";
    cin >> password;
    while (!isStrongPassword(password))
    {
        cout << "Weak password. It must be at least 8 characters long and contain an uppercase letter, a lowercase letter, a digit, and a special character." << endl;
        cout << "Enter password: ";
        cin >> password;
    }

    // This is my contribution

    // Authentication check
    bool isAuthenticated = (username == correctUsername && password == correctPassword);

    if (isAuthenticated)
    {
        cout << "Login successful." << endl;
    }
    else
    {
        cout << "Login failed." << endl;
    }

    return 0;
}
