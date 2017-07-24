
/* The rf_net_node arduino library is the node module for the RF network addressing protocol.
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

/* Pseudocode
 *  
 *  check configued flash location for existing node configurations.
 *  expose methods:
 *    rf_net_self_config() //check if this node has valid address, if so checkin with gateway.. else request new node details.
 *    rf_net_self_remove() // Remove node from network.
 *    rf_net_self_add() // Request node to add to network.
 *    rf_net_network_display() // Print list of note and gateway information.
 * 
 */



