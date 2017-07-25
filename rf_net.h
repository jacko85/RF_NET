
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


// ensure this library description is only included once
#ifndef rf_net_h
#define rf_net_h

#include “arduino.h”

// library interface description
class rf_net
{
  // user-accessible "public" interface
  public:
    rf_net(int); // 1 for node, 0 for gateway
    	void rf_node_checkin(void);
	void rf_node_checkin(void);
	void rf_node_add(void);
	void rf_node_remove(void);
	void rf_diag(void);
	void rf_network_display(void);

  // library-accessible "private" interface
  private:
    //int value;
    //void doSomethingSecret(void);
};

#endif

