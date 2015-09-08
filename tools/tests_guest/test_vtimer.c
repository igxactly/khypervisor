#include "../tests_guest/test_vtimer.h"

#include <arch_types.h>
#include <lib/uart_print.h>

#define VDEV_TIMER_BASE    0x3FFFE000
volatile uint32_t *base = (uint32_t *) VDEV_TIMER_BASE;

void vtimer_mask(uint32_t value)
{
    *base = value;
}
