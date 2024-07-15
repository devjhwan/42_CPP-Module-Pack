#pragma once

class Data {
	public:
		Data();
		Data(const Data &obj);
		~Data();
		Data	&operator=(const Data &obj);
	private:
		int data;
};