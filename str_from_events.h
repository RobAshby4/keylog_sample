#include <linux/input-event-codes.h>
#include <string.h>

void alloc_str_literal(const char *str, char **to);
char *keycode_to_str(unsigned short code);
