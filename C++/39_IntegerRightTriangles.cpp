#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    int maxSolutions = 0;
    int bestP = 0;
    vector<tuple<int, int, int>> bestTriangles;

    for (int p = 1; p <= 1000; ++p) {
        vector<tuple<int, int, int>> triangles;
        for (int a = 1; a < p / 3; ++a) {
            for (int b = a; b < (p - a) / 2; ++b) {
                int c = p - a - b;
                if (a * a + b * b == c * c) {
                    triangles.emplace_back(a, b, c);
                }
            }
        }

        if (triangles.size() > maxSolutions) {
            maxSolutions = triangles.size();
            bestP = p;
            bestTriangles = triangles;
        }
    }

    cout << "Perimeter with max solutions: " << bestP << " (Solutions: " << maxSolutions << ")\n";
    cout << "Triangles:\n";
    for (const auto& [a, b, c] : bestTriangles) {
        cout << "(" << a << ", " << b << ", " << c << ")\n";
    }

    return 0;
}
