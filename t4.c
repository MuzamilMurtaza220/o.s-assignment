#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int add(int i, int end, int arry[]) {
    int s = 0;
    for (int j = i; j < end; j++) {
        s = s + arry[j];
    }
    return s;
}

int main() {
    int sum;
    int arry[1000];
    for (int i = 0; i < 1000; ++i) {
        arry[i] = i + 1;
    }

    int id = fork();
    if (id == 0) {
        sum =sum + add(0, 100, arry);
    } else {
        id = fork();
        if (id == 0) {
            sum =sum + add(100, 200, arry);
        }
else {id = fork();
        if (id == 0) {
            sum =sum + add(200, 300, arry);
        }
else{
    id = fork();
        if (id == 0) {
            sum =sum + add(300, 400, arry);
        }
else{
id = fork();
        if (id == 0) {
            sum =sum + add(400, 500, arry);
        }
else{
id = fork();
        if (id == 0) {
            sum =sum + add(500, 600, arry);
        }
else{
id = fork();
        if (id == 0) {
            sum =sum + add(600, 700, arry);
        }
else{
id = fork();
        if (id == 0) {
            sum =sum + add(700, 800, arry);
        }
else{
id = fork();
        if (id == 0) {
            sum =sum + add(800, 900, arry);
        }
else{
id = fork();
        if (id == 0) {
            sum =sum + add(900, 1000, arry);
        }
}
}

}
}
}
}
}}

    }


    printf("sum is %d\n", sum);

}
