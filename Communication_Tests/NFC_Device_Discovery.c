/***************************************************************************
    NFC Device Discovery.c
    Author: Meghadoot
    2025-03-06
    
    This is a library for the validation of NFC.
    This validation test uses libnfc and nfc-tools to discover NFC tags.
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
    printf("Starting NFC Device Discovery Test...\n");

    // Poll for NFC tags for 10 seconds
    system("nfc-poll -t 10");

    printf("NFC Device Discovery Test completed.\n");
    return 0;
}
