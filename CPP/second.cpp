#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    for(int i =1, j = 1; i <= n + 1;)
    {
        if(i == j)
        {
            i -= -1;
            j = 1;
            cout << endl;
        }
        else 
        {
            cout << "* ";
            j++;
        }
    }
}