#pragma once
#include <iostream>
#include <fstream>
class Temp;
void AutoTest();

class CVector {
	double* v;
	int n;
public:
	CVector() { SetZero(); }
	~CVector() { Clean(); }
	void Clean();
	void SetZero();
	CVector(const CVector& b);
	CVector(const double* b, int n);
	CVector& operator=(const CVector& b);
	void CopyOnly(const CVector& b);
	void print();
	int length()const;
	double* vector()const;
	CVector operator+(const CVector& b);
	CVector operator-(const CVector& b);
	double& operator[](int i) const;
	double operator*(const CVector& b);
	Temp operator[](int i);

	friend class Temp;
};
