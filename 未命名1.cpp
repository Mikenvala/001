#include <stdio.h>

int main() {
    double num1, num2;
    
    // 输入两个数
    printf("请输入两个数: ");
    scanf("%lf %lf", &num1, &num2);

    // 加法
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);

    // 减法
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    // 乘法
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    // 除法，避免除数为零的情况
    if (num2 != 0) {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("除数不能为零\n");
    }

    return 0;
}
