#include <stdio.h>
#include <locale.h>// ���������� �������
#include <math.h>
#include <stdlib.h>
#define N 10// ����� ������ 
int main() {
    double B[N]; // �����
    setlocale(LC_ALL, "ukr"); // ������������ ����������

    printf("����i�� 10  �������i� ������i\n");//���������� ������ ������������
    for (int i = 0; i < N; i++) {
        printf("������ %d:", i+1);
            scanf_s("%lf", &B[i]);
    }
    double *h;//���������� ���������
    double average = 0, sum=0, k=0;
    
    for (h = B; h < B + N; h++) {//h=B ������������ ��������� �� ������ ������� ������ 
        if (*h < 0) {// ����� ����������
            sum += *h;
            k++;
        }
    }

    if (k > 0) {
        average = sum / k;// ����� ���������� �������������
        printf("������ ����������� �i�'����� �����: %.1lf\n", average);
    }
    else {
        printf("���� �i�'����� ����� ��� ���������� ���������� �������������\n");
    }
}