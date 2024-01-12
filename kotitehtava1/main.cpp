#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int satluku = rand() % 40;
    cout << satluku << endl;
    satluku = rand() % 40;
    cout << satluku << endl;
    satluku = rand() % 40;
    cout << satluku << endl;
    satluku = rand() % 40;
    cout << satluku << endl;
    satluku = rand() % 40;
    cout << satluku << endl;
}
