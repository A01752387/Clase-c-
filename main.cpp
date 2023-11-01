# include <iostream>
# include <cmath>
using std::cout;
using std::end;
using namespace std;
using std::cin;

int main()
{
    float x = 0.0;
    cout << "La variable x es" << x << endl;
    int z = sqrt(4);

    //cin >> z;

    if (z == 2 && x != 0)
    {
        cout << "Z es 2" << endl;

    }
    else 
    {
        cout << "Z no es 2" << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    int i = 0;
    while (i < 10)
    {
        cout << "Dentro del while" << i << endl;
        i = i + 2;
    }

    do 
    {
        cout << "Dentro del while" << i << endl;
        i = i + 1;  
    }while (i < 10);
}