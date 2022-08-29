#include <iostream>
#include <Windows.h>
#include <string>
#include "figures.h"

std::string triangleInfo(int aPar, int bPar, int cPar, int APar, int BPar, int CPar) {
    return " (стороны " + std::to_string(aPar) + ", " + std::to_string(bPar)
        + ", " + std::to_string(cPar) + "; углы " + std::to_string(APar) + ", "
        + std::to_string(BPar) + ", " + std::to_string(CPar) + ")";
}

std::string quadrilateralInfo(int aPar, int bPar, int cPar, int dPar, int APar, int BPar, int CPar, int DPar) {
    return " (стороны " + std::to_string(aPar) + ", " + std::to_string(bPar)
        + ", " + std::to_string(cPar) + ", " + std::to_string(dPar)
        + "; углы " + std::to_string(APar) + ", " + std::to_string(BPar)
        + ", " + std::to_string(CPar) + ", " + std::to_string(DPar) + ")";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int params[58][10] = {
        {0,0,10,20,30,40,50,60,70,80}, // Figure
        {0,5,10,20,30,40,50,60,70,80}, // Figure, сторон больше 0

        {1,3,10,20,30,40,50,60,70,80}, // Triangle
        {1,0,10,20,30,40,50,60,70,80}, // Triangle, сторон не 3
        {1,3,10,20,30,40,50,60,90,80}, // Triangle, сумма углов не 180

        {2,3,10,20,10,40,50,80,50,80}, // IsoscelesTriangle
        {2,3,10,20,30,40,50,80,50,80}, // IsoscelesTriangle, стороны не равны
        {2,3,10,20,10,40,30,60,90,80}, // IsoscelesTriangle, углы не равны
        {2,3,10,20,10,40,50,60,50,80}, // IsoscelesTriangle, сумма углов не 180

        {3,3,30,30,30,40,60,60,60,80}, // EquilateralTriangle
        {3,3,10,20,10,40,60,60,60,80}, // EquilateralTriangle, стороны не равны
        {3,3,10,10,30,40,60,60,60,80}, // EquilateralTriangle, стороны не равны
        {3,3,10,30,30,40,60,60,60,80}, // EquilateralTriangle, стороны не равны
        {3,3,10,10,10,40,65,65,50,80}, // EquilateralTriangle, углы не равны 60
        {3,3,10,10,10,40,50,65,65,80}, // EquilateralTriangle, углы не равны 60
        {3,3,10,10,10,40,65,50,65,80}, // EquilateralTriangle, углы не равны 60
        {3,3,10,10,10,40,50,50,50,80}, // EquilateralTriangle, сумма углов не 180

        {4,3,10,20,30,40,30,60,90,80}, // RightTriangle
        {4,3,10,20,30,40,50,60,70,80}, // RightTriangle, угол не 90
        {4,3,10,20,30,40,50,60,90,80}, // RightTriangle, сумма углов не 180

        {5,4,10,20,30,40,50,160,70,80}, // Quadrilateral
        {5,6,10,20,30,40,50,160,70,80}, // Quadrilateral, сторон не 4
        {5,4,10,20,30,40,150,60,70,90}, // Quadrilateral, сумма углов не 360

        {6,4,10,20,10,20,50,130,50,130}, // Parallelogram
        {6,4,10,20,30,20,50,130,50,130}, // Parallelogram, стороны не равны
        {6,4,10,20,10,30,50,130,50,130}, // Parallelogram, стороны не равны
        {6,4,10,20,30,40,50,130,50,130}, // Parallelogram, стороны не равны
        {6,4,10,20,10,20,50,130,50,230}, // Parallelogram, углы не равны
        {6,4,10,20,10,20,50,130,150,130}, // Parallelogram, углы не равны
        {6,4,10,20,10,20,50,130,150,230}, // Parallelogram, углы не равны
        {6,4,10,20,10,20,90,130,90,130}, // Parallelogram, сумма углов не 360

        {7,4,10,20,10,20,90,90,90,90}, // Rect
        {7,4,10,20,30,20,90,90,90,90}, // Rect, стороны не равны
        {7,4,10,30,10,20,90,90,90,90}, // Rect, стороны не равны
        {7,4,10,20,30,40,90,90,90,90}, // Rect, стороны не равны
        {7,4,10,20,10,20,80,90,90,90}, // Rect, углы не равны 90
        {7,4,10,20,10,20,90,80,90,90}, // Rect, углы не равны 90
        {7,4,10,20,10,20,90,90,80,90}, // Rect, углы не равны 90
        {7,4,10,20,10,20,90,90,90,80}, // Rect, углы не равны 90
        {7,4,10,20,10,20,80,80,80,80}, // Rect, сумма углов не 360

        {8,4,10,10,10,10,50,130,50,130}, // Rhomb
        {8,4,20,10,10,10,50,130,50,130}, // Rhomb, стороны не равны
        {8,4,10,20,10,10,50,130,50,130}, // Rhomb, стороны не равны
        {8,4,10,10,20,10,50,130,50,130}, // Rhomb, стороны не равны
        {8,4,10,10,10,20,50,130,50,130}, // Rhomb, стороны не равны
        {8,4,10,10,10,10,50,130,150,130}, // Rhomb, углы не равны
        {8,4,10,10,10,10,50,230,50,130}, // Rhomb, углы не равны
        {8,4,10,10,10,10,50,130,60,120}, // Rhomb, углы не равны
        {8,4,10,10,10,10,150,130,150,130}, // Rhomb, сумма углов не 360

        {9,4,20,20,20,20,90,90,90,90}, // Square
        {9,4,30,20,20,20,90,90,90,90}, // Square, стороны не равны
        {9,4,20,30,20,20,90,90,90,90}, // Square, стороны не равны
        {9,4,20,20,30,20,90,90,90,90}, // Square, стороны не равны
        {9,4,20,20,20,30,90,90,90,90}, // Square, стороны не равны
        {9,4,20,20,20,20,80,90,90,90}, // Square, углы не равны 90
        {9,4,20,20,20,20,90,80,90,90}, // Square, углы не равны 90
        {9,4,20,20,20,20,90,90,80,90}, // Square, углы не равны 90
        {9,4,20,20,20,20,90,90,90,80} // Square, углы не равны 90
    };
    


    for (int i = 0; i < 58; i++) {
        int fig = params[i][0];
        int sc = params[i][1];
        int a_par = params[i][2];
        int b_par = params[i][3];
        int c_par = params[i][4];
        int d_par = params[i][5];
        int A_par = params[i][6];
        int B_par = params[i][7];
        int C_par = params[i][8];
        int D_par = params[i][9];

        std::cout << i << "\n";
        std::string figureName;
        std::string figureParams;

        try {
            switch (fig) {
                case 0: {
                    figureName = "Фигура";
                    Figure figure(sc);
                    std::cout << figureName << " создана. " << "\n";
                    break;
                }
                case 1: {
                    figureName = "Треугольник";
                    figureParams = triangleInfo(a_par, b_par, c_par, A_par, B_par, C_par);
                    Triangle figure(sc, a_par, b_par, c_par, A_par, B_par, C_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                case 2: {
                    figureName = "Равнобедренный треугольник";
                    figureParams = triangleInfo(a_par, b_par, c_par, A_par, B_par, C_par);
                    IsoscelesTriangle figure(sc, a_par, b_par, c_par, A_par, B_par, C_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                case 3: {
                    figureName = "Равносторонний треугольник ";
                    figureParams = triangleInfo(a_par, b_par, c_par, A_par, B_par, C_par);
                    EquilateralTriangle figure(sc, a_par, b_par, c_par, A_par, B_par, C_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                case 4: {
                    figureName = "Прямоугольный треугольник";
                    figureParams = triangleInfo(a_par, b_par, c_par, A_par, B_par, C_par);
                    RightTriangle figure(sc, a_par, b_par, c_par, A_par, B_par, C_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                case 5: {
                    figureName = "Четырехугольник";
                    figureParams = quadrilateralInfo(a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    Quadrilateral figure(sc, a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                case 6: {
                    figureName = "Параллелограм";
                    figureParams = quadrilateralInfo(a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    Parallelogram figure(sc, a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                case 7: {
                    figureName = "Прямоугольник";
                    figureParams = quadrilateralInfo(a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    Rect figure(sc, a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                case 8: {
                    figureName = "Ромб";
                    figureParams = quadrilateralInfo(a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    Rhomb figure(sc, a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                case 9: {
                    figureName = "Квадрат";
                    figureParams = quadrilateralInfo(a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    Square figure(sc, a_par, b_par, c_par, d_par, A_par, B_par, C_par, D_par);
                    std::cout << figureName << figureParams << " создан. " << "\n";
                    break;
                }
                default:
                    break;
             }
   
        }
            catch (const BadFigureException& ex) {
                std::cout << figureName << figureParams << " не создан.\nПричина: " << ex.what() << std::endl;
            }

            catch (...) {
                std::cout << "Неизвестная ошибка" << std::endl;
            }
        }

}
/*
Создайте собственный класс исключения для ошибки создания геометрической фигуры - 
подумайте, от какого типа его унаследовать и не забудьте поместить новый класс в отдельную пару файлов

Возьмите иерархию классов из предыдущего задания. 
Теперь при создании экземпляров классов вам нужно проверять аргументы, которые поступают на вход конструктору.
Если аргументы не соответствуют ограничениям, объект не должен быть создан,
а на консоль должно быть выведено соответствующее сообщение. 
Причина ошибки должна быть сформулирована на уровне конструктора 
и выведена на экран при обработке ошибок

Ограничения:

фигура (количество сторон = 0)
треугольник (стороны и углы произвольные, количество сторон = 3, сумма углов = 180)
прямоугольный треугольник (угол C всегда равен 90)
равнобедренный треугольник (стороны a и c равны, углы A и C равны)
равносторонний треугольник (все стороны равны, все углы равны 60)
четырёхугольник (стороны и углы произвольные, количество сторон = 4, сумма углов = 360)
прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
квадрат (все стороны равны, все углы равны 90)
параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)
ромб (все стороны равны, углы A,C и B,D попарно равны)
Для проверки попробуйте создать разные геометрические фигуры - правильные и неправильные. В случае успешного создания выводите на экран сообщение об успешном создании и параметры фигуры. В случае, если создание не удалось - выведите параметры фигуры и причину ошибки

Пример работы программы
Консоль
Прямоугольный треугольник (стороны 3, 4, 5; углы 30, 60, 90) создан
Прямоугольный треугольник (стороны 3, 4, 5; углы 40, 60, 90) не был создан. Причина: сумма углов не равна 180
*/