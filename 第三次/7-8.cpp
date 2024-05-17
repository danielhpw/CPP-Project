#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int main(void)
{
    int max,
        next;
    vector<int> v;
    cout << "Enter the numbers of the sudents' grade(input -1 if you want to stop):";
    cin >> next;
    max = next;
    while (next >= 0)
    {
        v.push_back(next);
        cin >> next;
        if (next > max)
        {
            max = next;
        }
    }
    max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }
    for (int i = 0; i <= max; i++)
    {
        int num = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] == i)
                num++;
        }
        if (num != 0)
        {
            cout << "\nThere is " << num << " students tests " << i;
        }
    }

}