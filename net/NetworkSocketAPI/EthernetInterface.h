/* EthernetInterface Base Class
 * Copyright (c) 2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ETHERNET_INTERFACE_H
#define ETHERNET_INTERFACE_H

#include "NetworkInterface.h"

/** EthernetInterface class
 *  Common interface that is shared between ethernet hardware
 */
class EthernetInterface : public NetworkInterface
{
public:
    /** Start the interface
     *  @return 0 on success
     */
    virtual int32_t connect() = 0;

    /** Stop the interface
     *  @return 0 on success
     */
    virtual int32_t disconnect() = 0;
};

#endif