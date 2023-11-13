#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int n, m, w;
	cin >> n >> m >> w;

	vector<vector<int>> mat(n, vector<int>(m, 0));

	for (int i = 0; i < w; i++) {
		int x, y;
		cin >> x >> y;
		x = x - 1;
		y = y - 1;


		mat[x][y] = -1; 
		for (int dy = -1; dy <= 1; dy++) {
			for (int dx = -1; dx <= 1; dx++) {
				int n_x = x + dx;
				int n_y = y + dy; 

				if (n_x >= 0 && n_x < n && n_y >= 0 && n_y < m && mat[n_x][n_y] != -1) {
					mat[n_x][n_y]++;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mat[i][j] == -1) {
				cout << '*';
			}
			else {
				cout << mat[i][j];
			}
		
		}
		cout << endl;
	}
}
