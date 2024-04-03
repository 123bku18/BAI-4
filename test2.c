#include "stm32f4xx.h" // Thư viện chuẩn STM32F4
#include <stdio.h>

volatile uint32_t* GPIOB = 

int main() {
    HAL_Init(); // Khởi tạo HAL (Hardware Abstraction Layer)

    // Bật clock cho GPIOB
    __HAL_RCC_GPIOB_CLK_ENABLE();

    // Đặt bit mask để kiểm tra bit 1 trong thanh ghi GPIOB_IDR (Input Data Register)

    // 0000 0000 0000 0000 0000 0000 0000 0010

    // Kiểm tra bit 1 của GPIOB_IDR
    if (GPIOB_IDR & (1<<1)) {
        printf("Chân GPIOB_PIN_1 ở trạng thái Logic High (1).\n");
    } else {
        printf("Chân GPIOB_PIN_1 ở trạng thái Logic Low (0).\n");
    }

    while (1) {
        // Chương trình chạy ở đây
    }

    return 0;
}