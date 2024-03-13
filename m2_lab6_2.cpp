#include <stdio.h>
#include <locale.h>// підключення бібліотек
#include <math.h>
#include <stdlib.h>
#define N 10// розмір масиву 
int main() {
    double B[N]; // масив
    setlocale(LC_ALL, "ukr"); // встановлення локалізації

    printf("Введiть 10  елементiв матрицi\n");//заповнення масиву користувачем
    for (int i = 0; i < N; i++) {
        printf("Елемет %d:", i+1);
            scanf_s("%lf", &B[i]);
    }
    double *h;//оголошення покажчика
    double average = 0, sum=0, k=0;
    
    for (h = B; h < B + N; h++) {//h=B встановлення покажчика на перший елемент масиву 
        if (*h < 0) {// пошук мінімального
            sum += *h;
            k++;
        }
    }

    if (k > 0) {
        average = sum / k;// пошук середнього арифметичного
        printf("Середнє арифметичне вiд'ємних чисел: %.1lf\n", average);
    }
    else {
        printf("Немає вiд'ємних чисел для обчислення середнього арифметичного\n");
    }
}