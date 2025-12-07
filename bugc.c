// 1. Missing Semicolon

#include <stdio.h>
int main() {
    printf("Hello World")
    return 0;
}

// 2. Wrong Format Specifier

#include <stdio.h>
int main() {
    int x = 10;
    printf("%f", x);
    return 0;
}

// 3. Uninitialized Variable

#include <stdio.h>
int main() {
    int x;
    printf("%d", x);
    return 0;
}

// 4. Array Out of Bounds

#include <stdio.h>
int main() {
    int arr[3] = {1,2,3};
    printf("%d", arr[3]);
    return 0;
}

// 5. Wrong Header

#include <stdio.h>
int main() {
    int x = sqrt(16);
    printf("%d", x);
    return 0;
}

// 6. Infinite Loop

#include <stdio.h>
int main() {
    int i = 0;
    while(i < 5) {
        printf("%d\n", i);
    }
    return 0;
}

// 7. Wrong Return Type

#include <stdio.h>
int main() {
    return "Success";
}

// 8. Wrong Operator

#include <stdio.h>
int main() {
    int a = 10, b = 3;
    printf("%d", a // b);
    return 0;
}

// 9. Missing & in scanf

#include <stdio.h>
int main() {
    int x;
    scanf("%d", x);
    printf("%d", x);
    return 0;
}

// 10. Logic Error

#include <stdio.h>
int main() {
    int n = 4;
    if(n % 2 == 1)
        printf("Even");
    else
        printf("Odd");
    return 0;
}