#include "recurtions.h"

recurtions::recurtions() {
    countF = 0;
}

int recurtions::F5(int n) {
    if (!(0 < n && n < 46)) return 0; // после 45 переполнение

    if (n == 1) return 1;

    if (n % 2 == 1) {
        countF += 2;
        return 5 * n + F5(n - 1) + F5(2);
    }
    else if (n % 2 == 0) {
        ++countF;
        return 3 * F5(n - 1);
    }

    return 0;
}

int recurtions::F13(int n) {
    if (!(0 < n && n < 1000)) return 0;

    if (n == 1 or n == 2) return 1;

    else if (n > 2 && (n % 2 == 0)) {
        ++countF;
        return 2 + F13(n - 1);
    }
    else if (n > 2 && (n % 2 == 1)) {
        ++countF;
        return 3 * n + F13(n - 2);
    }

    return 0;
}

int recurtions::F7(const QString &s, int i, int j) { // i - индекс первого символа, j - индекс последнего символа
    if (i >= j) return 1; // полиндром

    if (s[i] != s[j]) return 0;

    return F7(s, i + 1, j - 1);;
}
