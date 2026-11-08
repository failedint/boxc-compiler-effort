#ifndef LOGGING_H
#define LOGGING_H
#include <time.h>
#include <stdio.h>

static inline void log_error(const char *message) {
    time_t current_time;
    time(&current_time);
    struct tm *timeinfo = localtime(&current_time);
    FILE* errlogs = fopen("../logs/boxc.txt", "a");
    if (errlogs != NULL) {
        fprintf(errlogs, "[%s] %s\n", asctime(timeinfo), message);
        fclose(errlogs);
    }
}

#endif
