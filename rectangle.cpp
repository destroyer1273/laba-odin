#include <iostream>
#include <cmath>
double perimetr(double height, double width)
{
    return 2*(height+width); 
}
double ploshad(double height, double width)
{
    return (height*width);
}
double diagonal(double height, double width)
{
    return (sqrt(height*height + width*width));
}

int main() {
    double insertedHeight, insertedWidth;
    std::cout << "Введите параметры прямоугольника(высота, ширина)" << std::endl;
    std::cin >> insertedHeight >> insertedWidth;
    if(std::cin && insertedHeight > 0 && insertedWidth > 0) {
    	std::cout << "Периметр: "  << perimetr(insertedHeight, insertedWidth)  << std::endl;
    	std::cout << "Площадь: " << ploshad(insertedHeight, insertedWidth) << std::endl;
    	std::cout << "Длина диагонали: " << diagonal(insertedHeight, insertedWidth) << std::endl;
    	std::cout << "Программа завершена" << std::endl;
    } else {
    	std::cout << "Ошибка!" << std::endl; 
    }
}
