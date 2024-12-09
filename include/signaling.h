#pragma once
#include <FreeRTOS.h>
#include <semphr.h>

struct signal_data {
    int32_t input;
    int32_t output;
};

// Worker
void signal_handle_calculation(SemaphoreHandle_t request,
                               SemaphoreHandle_t response,
                               struct signal_data *data);

// Request
BaseType_t signal_request_calculate(SemaphoreHandle_t request,
                                    SemaphoreHandle_t response,
                                    struct signal_data *data);
