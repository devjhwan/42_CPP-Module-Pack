#pragma once

class Data {
	public:
		Data();
		Data(int data);
		Data(const Data &obj);
		~Data();
		Data	&operator=(const Data &obj);
		int	GetData();
	private:
		int data;
};