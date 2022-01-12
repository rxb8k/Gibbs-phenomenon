#include <iostream>
#include <iomanip> 
#include <cmath>
#include <fstream>
using namespace std;

double pi = 3.14;

double fouries(int n, float t) {
	return (4 / (n * pi)) * sin(n * pi * t);
}

int main()
{
	ofstream file("data.txt");
	int N = 10; // N의 값을 10, 20, 100, 500으로 바꾸어 가며 함수값 측정

	// 가로축: n 증가
	for (float n = 1; n <= N; n += 2) {
		file << "\t" << n;
	}
	// 세로축: t=0 ~ t=2
	for (float t = 0; t <= 2; t += 0.005) {
		file << endl << t;
		 for (float n = 1; n <= N; n += 2){
			file << "\t" << fouries(n, t);
		}
	}
	return 0;
}