#include <iostream>
#include <sys/utsname.h>
using namespace std;

int main(){
    struct utsname sysInfo;

    uname(&sysInfo);
    cout << "System name:           " << sysInfo.sysname << "\n";
    cout << "Machine Arch:           " << sysInfo.machine << "\n";
    cout << "Host name:           " << sysInfo.nodename << "\n";
    cout << "Release (Kernel) version:           " << sysInfo.release << "\n";
    cout << "Kernel Build Timestamp:           " << sysInfo.version << "\n";
    cout << "Domain name:           " << sysInfo.domainname << "\n";

    return 0;
}
