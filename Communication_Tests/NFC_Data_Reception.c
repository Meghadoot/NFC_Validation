/***************************************************************************
    NFC Data Reception.c
    Author: Meghadoot
    2025-03-05
    
    This is a library for the validation of NFC.
    This validation test uses ibnfc and nfc-tools to track data reception.
    Designed specifically to work with the Embedded Boards/devices working with 
    Yocto Linux or other distros. 
    
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

int main() {
    printf("Starting NFC Data Reception Test...\n");

    // Simulate data reception from an NFC tag
    system("nfc-mfclassic r a nfc-dump.mfd");
    //nfc-mfClassic reads from the MIFARE (DESFire or Plus) Classic Tags & saves the data to nfc-blank.mfd dump    
    // Uses Key A for authentication.

    printf("NFC Data Reception Test completed.\n");
    return 0;
}
