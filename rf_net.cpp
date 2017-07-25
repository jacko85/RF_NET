/* The rf_net arduino library is a module for the RF network addressing protocol.
 *  
 *  Created by John 'Jack' O'Mahony <jack.om@gmail.com>
 *  
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *  
 *  
 */


#include “arduino.h”

// include this library's description file
#include “rf_net.h”


// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

rf_net::rf_net(int givenValue) //1 for node 0 for gateway
{
  // initialize this instance's variables
  value = givenValue;

  Serial.begin(115200);
	// Check for manual set flags / exceptions.

	// If gateway, set up data structure to hold network details.
		// Future, check flash for existing network.
	// If node, set up data structure to hold node details.
		// Future, check flash for existing node details.
	

}

// Public Methods //////////////////////////////////////////////////////////////
void rf_net:rf_node_checkin(void)
{
	// Node only
	// If details set, send to gateway to confirm.
	// If not, ask gateway for details.
}

void rf_node_checkin(void) 
{

}

void rf_node_add(void)
{

}

void rf_node_remove(void)
{
	// Send remove request to gateway. 
	// Remove local details (future flash).
}

void rf_diag(void)
{
	// Print local details. 
}

void rf_network_display(void)
{
	// Print local details + network details (network request?). 
}