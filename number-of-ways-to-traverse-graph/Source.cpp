#include <iostream>
#include <vector>
using namespace std;

int factorial(int num);
int numberOfWaysToTraverseGraph(int width, int height);

int main()
{
    auto width = 4;
    auto height = 3;
    cout << numberOfWaysToTraverseGraph(width,height) <<" ";
    return 0;
}

int numberOfWaysToTraverseGraph(int width, int height) {
    // Write your code here.
    int xDistanceToCorner = width - 1;
    int yDistanceToCorner = height - 1;

    int numerator = factorial(xDistanceToCorner + yDistanceToCorner);
    int denominator = factorial(xDistanceToCorner) * factorial(yDistanceToCorner);

    return int(numerator / denominator);
}

int factorial(int num)
{
    int result = 1;

    for (int n = 2; n < num + 1; n++)
    {
        result *= n;
    }

    return result;
}