#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <iostream>

int main(int argc, char *argv[]){
    struct stat file_stats;

    if(argc != 2){
        std::cout << "Usage: fstat FILE...\n";
        exit(EXIT_FAILURE);
    }

    if((stat(argv[1], &file_stats)) == -1){
        perror("fstat");
        return 1;
    }

    std::cout << "Filename: " << argv[1] << "\n";
    std::cout << "Device: " << file_stats.st_dev << "\n";
    std::cout << "Inode: " << file_stats.st_ino << "\n";
    std::cout << "Hard links: " << file_stats.st_nlink << "\n";
    std::cout << "owner UID: " << file_stats.st_uid << "\n";
    std::cout << "owner GID: " << file_stats.st_gid << "\n";
    std::cout << "device type: " << file_stats.st_rdev << "\n";
    std::cout << "size (in bytes): " << file_stats.st_size << "\n";
    std::cout << "filesystem block size (in bytes): " << file_stats.st_blksize << "\n";
    std::cout << "allocated blocks: " << file_stats.st_blocks << "\n";
    std::cout << "last access time: " << file_stats.st_atime << "\n";
    std::cout << "last modification time: " << file_stats.st_mtime << "\n";
    std::cout << "creation time: " << file_stats.st_ctime << "\n";

    return 0;
}