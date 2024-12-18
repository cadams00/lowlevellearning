#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

struct database_header {
    unsigned short version;
    unsigned short employees;
    unsigned int filelength;
};

int main(int argc, char const *argv[])
{
    struct database_header head = {0};
    struct stat dbStat = {0};

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }
    
    int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
    if (fd == -1) {
        perror("open");
        return -1; 
    }

    if (read(fd, &head, sizeof(head)) != sizeof(head)) {
        perror("read");
        close(fd);
        return -1;
    }

    printf("DB Version: %u\n", head.version);
    printf("DB Number of Employees: %u\n", head.employees);
    printf("DB File Length: %u\n", head.filelength);

    if (fstat(fd, &dbStat) < 0) {
        perror("fstat");
        close(fd);
        return -1;
    }

    printf("DB File Length, reported by stat: %lu\n", dbStat.st_size);

    if (dbStat.st_size != head.filelength) {
        printf("HACKER DETECTED!\n");
        close(fd);
        return -2;
    }

    close(fd);
    return 0;
}
