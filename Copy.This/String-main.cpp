#include "String.h"

int main() {
    String defaultString;
    // За замовчуванням (автоматично)
    defaultString.input();
    defaultString.output();

    String customSizeString(50); // використання конструктора довільного розміру
    customSizeString.input();
    customSizeString.output();

    String initializedString("Hello World!!");
    initializedString.output();

    String copiedString = initializedString;
    copiedString.output();

    return 0;
}