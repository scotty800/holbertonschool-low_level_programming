#ifndef __MAIN_H__
#define __MAIN_H__
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif
