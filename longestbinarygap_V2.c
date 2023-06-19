#include <stdio.h>


int solution(int N) {
    int maxGap = 0;
    int currentGap = 0;
    int foundOne = 0;

    // Kiểm tra từng bit của N từ trái sang phải
    while (N > 0) {
        // Kiểm tra bit cuối cùng của N
        if (N & 1) 
        {
            if (!foundOne) {
                foundOne = 1;
            } 
            else {
                // Kiểm tra và cập nhật maxGap nếu cần
                if (currentGap > maxGap) {
                    maxGap = currentGap;
                }
                currentGap = 0;
            }
        } 
        else 
        {
            if (foundOne) {
                currentGap++;
            }
        }

        // Dịch phải N để kiểm tra bit tiếp theo
        N >>= 1;
    }

    return maxGap;
}

int main() {
    int N;
    printf("Number: ");
    scanf("%d", &N);
    int max = solution(N);
    printf("The length of the longest binary gap in %d is %d\n", N, max);
    return 0;
}
