#include<iostream>
#include<string>
#include<time.h>
#include<vector>
using namespace std;
void sorter(string word)
{
    string vowels = "AEIOU";
    int vowels_count = 0, consonants_count = 0;
    
    for (size_t i = 0; i < word.size(); i++)
    {
        // PARTY
        // AEIOU

        for (size_t j = 0; j < vowels.size(); j++)
        {
            if (!isupper(word[i])) {
                cout << "Symbols " << word[i] << " isn`t upper" << endl;
                break;
            }
            else if (word[i] == vowels[j])
            {
                ++vowels_count;
                break;
            }
            else {
                ++consonants_count;
                break;
            }
        }
    }
    cout << "Vowels:" << vowels_count << endl;
    cout << "Consonants:" << consonants_count << endl;
}
void hw() {
    string word;
    cout << "Enter the word(with CAPS):";
    cin >> word;
    cout << endl;
    sorter(word);
}
int main()
{
    srand(time(NULL));
    vector<string> strings;
    string str = "str1";

    strings.push_back(str);
    strings.push_back("str2");
    strings.push_back("str3");
    strings.push_back("str4");
    for (auto& i : strings)
    {
        cout << i << endl;
    }
    cout << "Dynamic Array: " << endl;
    int* arrint;
    arrint = new int[5];
    arrint[0] = 22;
    for (size_t i = 1; i < 5; i++)
    {
        arrint[i] = 1+ rand()%4;
    }
    for (size_t i = 0; i < 5; i++)
    {
        cout << arrint[i] << " ";
    }
    cout << endl;
    int* tmp = new int[5];
    tmp = arrint;

    arrint = new int[6];
    for (size_t i = 0; i < 5; i++)
    {
        arrint[i] = tmp[i];
    }
    arrint[5] = 228;
    cout << "NEW" << endl;
    for (size_t i = 0; i < 6; i++)
    {
        cout << arrint[i] << " ";
    }
    ////////////////////////////////////

}