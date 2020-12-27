#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int N, i;

    cin >> N;
    vector<pair<int, pair<int, int> > > a;
    a.resize(N);

    for (i = 0; i < N; i++) {
        a[i].second.first  = rand() % 11 - 5;
        a[i].second.second = rand() % 11 - 5;
        a[i].first = a[i].second.first*a[i].second.first + a[i].second.second*a[i].second.second;
        cout << "("<< a[i].second.first << "," << a[i].second.second << "), len=" << a[i].first << endl;
    }
    cout << endl;
    sort(a.begin(), a.end());
    for (i = 0; i < N; i++)
        cout << "("<< a[i].second.first << "," << a[i].second.second << "), len=" << a[i].first << endl;
}
