#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int a[1000], n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	sort(a, a+n);
	cout << a[(n-1)/2] << "\n";
}
