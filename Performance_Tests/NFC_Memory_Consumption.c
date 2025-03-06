/***************************************************************************
    NFC_Memory_Consumption_Test.c
    Author: Meghadoot
    2025-03-06
    
    This is a library for the validation for NFC.
    This validation test uses /proc/meminfo to measure runtime memory usage.
    Designed specifically to work with the Embedded Boards/devices working  
    with Yocto Linux or other distros. 
    
    Copyright (C) 2025  Meghadoot Gardi.  All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

 ***************************************************************************/

/** TODO
* Create Automation with global configs
**/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void log_memory_usage(const char *label) {
    FILE *fp = fopen("/proc/meminfo", "r");
    if (fp == NULL) {
        perror("Failed to open /proc/meminfo");
        return;
    }

    printf("%s Memory Usage:\n", label);
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp)) {
        if (strncmp(buffer, "MemFree:", 8) == 0 || strncmp(buffer, "MemAvailable:", 13) == 0) {
            printf("%s", buffer);
        }
    }

    fclose(fp);
}

void simulate_nfc_activity() {
    system("nfc-poll -1");  // Poll once for an NFC tag
}

int main() {
    printf("Starting NFC Memory Consumption Test...\n");

    log_memory_usage("Before NFC activity");

    simulate_nfc_activity();

    log_memory_usage("After NFC activity");

    printf("NFC Memory Consumption Test completed.\n");
    return 0;
}
