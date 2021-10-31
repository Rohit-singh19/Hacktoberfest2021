//unique hasheds will be genrarted in the form of indexes of array for O(1)

#include <iostream>
#include <fstream>
using namespace std;

int hash_generator(string w)
{

    int hash_ = 0;
    for (int i = 0; i < w.length(); i++)
    {
        hash_ = hash_ + w[i];
    }
    return hash_;
}
int main()
{
    string fruit;
    ifstream in;
    in.open("list_of_fruits.txt");
    int max = -1;
    while (!in.eof())
    {
        getline(in, fruit);
        // cout << fruit << " ";
        // cout << " \t\t: " << hash_generator(fruit) << "\n";
        if (hash_generator(fruit) > max)
            max = hash_generator(fruit);
    }
    cout << max;
    in.close();
    return 0;
}