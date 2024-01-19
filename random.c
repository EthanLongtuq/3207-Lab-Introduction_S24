#include "random.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char randchar() {
    return (char)(rand() % 26 + 97);
}