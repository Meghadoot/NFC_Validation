/***************************************************************************
    NFC_Performance Test.c
    Author: Meghadoot
    2025-03-06
    
    This is a library for the validation for NFC.
    This validation test uses nfc-mfclassic to check performance in sample time.
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
#include <time.h>

int main() {
    printf("Starting NFC Performance Test...\n");

    clock_t start, end;
    double duration;

    start = clock();
    system("nfc-mfclassic w a u nfc-blank.mfd");
    end = clock();

    duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Data transmission time: %f seconds\n", duration);

    start = clock();
    system("nfc-mfclassic r a nfc-dump.mfd");
    end = clock();

    duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Data reception time: %f seconds\n", duration);

    printf("NFC Performance Test completed.\n");
    return 0;
}
