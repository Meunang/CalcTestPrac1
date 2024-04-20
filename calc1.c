#include <stdio.h>
#include <math.h> 

int menu(void) {
    int n;
    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요: ");
    scanf_s("%d", &n);
    return n;
}

void factorial() {
    long long n, result = 1, i;
    printf("정수를 입력하시오: ");
    scanf_s("%lld", &n);
    for (i = 1; i <= n; i++)
        result = result * i;
    printf("결과 = %lld\n\n", result);
}

void sine() {
    double a, result;
    printf("각도를 입력하시오: ");
    scanf_s("%lf", &a);
    result = sin(a);
    printf("결과 = %lf\n\n", result);
}

void logBase10() {
    double a, result;
    printf("실수값을 입력하시오: ");
    scanf_s("%lf", &a);
    if (a <= 0.0)
        printf("오류\n");
    else {
        result = log10(a);
        printf("결과 = %lf\n\n", result);
    }
}

void square() {
    double a, root;

    printf("수를 입력하세요: ");
    scanf_s("%lf", &a);

    root = sqrt(a);

    printf("%lf의 제곱근은 %lf입니다.\n", a, root);
}

int factorial2(int num) {
    int b;
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        b = num * factorial2(num - 1);
        return b;
    }
}

void permutation() {

    int n, r;
    int permutation;

    printf("n을 입력하세요: ");
    scanf_s("%d", &n);

    printf("r을 입력하세요: ");
    scanf_s("%d", &r);

    permutation = factorial2(n) / factorial2(n - r);
    printf("%d개 중에서 %d개를 나열하는 순열의 수는 %d입니다.\n", n, r, permutation);
}

void combination() {
    int n, r;
    int combination;

    printf("n을 입력하세요: ");
    scanf_s("%d", &n);

    printf("r을 입력하세요: ");
    scanf_s("%d", &r);

    combination = factorial2(n) / (factorial2(r) * factorial2(n - r));
    printf("%d개 중에서 %d개를 선택하는 조합의 수는 %d입니다.\n", n, r, combination);
}

int main(void)
{
    while (1) {
        switch (menu()) {
        case 1:
            factorial();
            break;
        case 2:
            sine();
            break;
        case 3:
            logBase10();
            break;
        case 4:
            square();
            break;
        case 5:
            permutation();
            break;
        case 6:
            combination();
            break;
        case 7:
            printf("종료합니다.\n");
            return 0;
        default:
            printf("잘못된 선택입니다.\n");
            break;
        }
    }
}
