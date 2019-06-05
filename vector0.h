#include<iostream>
template<class T>
class vector {
public:
	vector(); //def ctor
	vector(vector<T>&other);//copy
	vector(vector<T>&&other);//move
	vector<T>&operator=(vector<T>&other);//assigment
	vector<T>&operator=(vector<T>&&other);//move assigment

	const unsigned size()const;
	const unsigned capasity()const;
	const bool empty();
	void push_back(const T);
	void pop_back();
	void push_front(const T);
	void pop_front();
	void print1();
	/*void insert(int, const T);
	void erase(int);*/
	void reverse();
	
private:
	unsigned m_size;
	unsigned m_cap;
	T *m_arr;
};

#pragma once