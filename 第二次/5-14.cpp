#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int arr[4][6] = { {3,1,5,2,1,5},{4,2,1,4,2,4},{3,1,2,4,4,1},{5,1,4,2,4,2} },
        rate[3],
        min = 0,
        count[4],
        movie[3];


    for (int i = 0; i < 3; i++)
    {
        cout << "\nRating the movie (ex:2  100)=>";
        cin >> rate[i] >> movie[i];
    }
    for (int i = 0; i < 4; i++)
    {
        count[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            count[i] = (rate[j] - arr[i][movie[j] - 100]) * (rate[j] - arr[i][movie[j] - 100]) + count[i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (count[i + 1] < count[min])
        {
            min = i + 1;
        }
    }
    cout << "\nThe closest match is reviewer " << min;
    for (int i = 0; i < 3; i++)
    {
        arr[min][movie[i] - 100] = 0;
    }
    for (int i = 0; i < 6; i++)
    {
        if (arr[min][i] != 0)
        {
            cout << "\nRating of " << arr[min][i] << " for movie " << (i + 100);
        }
    }
    return(0);
}