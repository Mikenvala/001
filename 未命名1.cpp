#include <stdio.h>

int main() {
    double num1, num2;
    
    // ����������
    printf("������������: ");
    scanf("%lf %lf", &num1, &num2);

    // �ӷ�
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);

    // ����
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    // �˷�
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    // �������������Ϊ������
    if (num2 != 0) {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("��������Ϊ��\n");
    }

    return 0;
}
