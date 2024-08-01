#include <iostream>
#include <string>  
using namespace std;
int main()
{
    string input{};
    cout << "Enter a string :";
    getline(cin, input);

    for (int i{ 0 }; i < input.size(); i++) {

        for (int s{ 1 }; s < input.size() - i; s++)
            cout << " ";

        for (int j{ 0 }; j < i; j++) 
            cout << input[j];
        
        for (int k{ i }; k >= 0; k--) 
            cout << input[k];
        
        cout << endl;
    }
}