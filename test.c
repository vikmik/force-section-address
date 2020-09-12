#include <unistd.h>

__attribute__((section(".test_section")))
int function_at_fixed_address(void) {
    return 0;
}

int main(void) {
	return pause();
}
