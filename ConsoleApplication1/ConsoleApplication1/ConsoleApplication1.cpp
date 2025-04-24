// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Line {
public:
	float k;
	float b;
	float getY(float x) {
		return	k * x + b;
	}
	float getX(float y) {
		return (y - b) / k;
	}
	Line(float b, float k) : k(k), b(b) {}
};
int UpOrDown(float x, float y, Line line1) {
	if (y > line1.getY(x)) {
		return 1;
	}
	else if (y < line1.getX(y));
	{
		return -1;
	}
	return 0;
}
int IsinsideTriangle(float x, float y, Line line1, Line line2, Line line3) {
	int Oleg1, Moisey2, Alina3;
	Oleg1 = UpOrDown(x, y, line1);
	Moisey2 = UpOrDown(x, y, line2);
	Alina3 = UpOrDown(x, y, line3);

	if (Oleg1 >= 1 and Moisey2 >= 1 and Alina3 >= 1) { //111
		return -1;
	}
	else if (Oleg1 <= -1 and Moisey2 <= -1 and Alina3 <= -1) { //-1-1-1
		return -1;
	}
	else if (Oleg1 == 0 || Moisey2 == 0 || Alina3 == 0) { //011
		return 0;
	}
	else if (Oleg1 + Moisey2 + Alina3 == -1 or Oleg1 + Moisey2 + Alina3 == 1) {
		return 1;
	}
}
int main() {
	Line line1 = Line(1, 0);
	Line line2 = Line(-1, 0);
	Line line3 = Line(0, 1);
	std::cout << IsinsideTriangle(0, 1 / 2, line1, line2, line3) << std::endl;
	std::cout << IsinsideTriangle(0, 0, line1, line2, line3) << std::endl;
	std::cout << IsinsideTriangle(3, 4, line1, line2, line3) << std::endl;
	std::cout << IsinsideTriangle(0, 1, line1, line2, line3) << std::endl;

	return 0;
}