
/* The rf_net_core arduino library is the core module for the RF network addressing protocol.
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
 *  check node vs gateway
 *  implement appropriate sub libraries
 *  
 */

#if defined(RF_NET_GATEWAY)
include(rf_net_gateway.h)
#elif defined(RF_NET_NODE)
include(rf_net_node.h)
#endif
 


