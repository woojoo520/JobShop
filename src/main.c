/**
 * @brief 定义控制台程序入口点。
 * 
 * @file main.c
 * @author Jason Qiu
 * @date 2018-05-02
 */

#include <stdio.h>
#include "file.h"

/**
 * @brief 定义控制台程序入口点。
 * 
 * @return int 程序运行无错误返回 0，否则返回非 0 值。
 */
int main() {
    order_t *test_order = create_order();
    read_from_console(&test_order);
    destroy_order(test_order);
    return 0;
}