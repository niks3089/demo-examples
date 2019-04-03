// This file is a part of the IncludeOS unikernel - www.includeos.org
//
// Copyright 2015 Oslo and Akershus University College of Applied Sciences
// and Alfred Bratterud
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cmath> // rand()
#include <sstream>
#if __cplusplus > 199711L
#define register
#endif

#include <os>
#include <net/interfaces>
#include <timers>
#include <net/http/request.hpp>
#include <net/http/response.hpp>

#include <hal/machine.hpp>
#include <rte_memory.h>
#include <rte_launch.h>
#include <rte_eal.h>
#include <rte_per_lcore.h>
#include <rte_lcore.h>
#include <rte_debug.h>

static  const char *argv[] = { "dpdk_demo", "-l", "0", "-n", "4", "--" };

using namespace std::chrono;

void Service::start()
{

  printf("Service started\n");

  int ret = rte_eal_init(6, (char **)argv);
	if (ret < 0)
		rte_panic("Cannot init EAL\n");

  printf("*** Basic dpdk_demo service started ***\n");
}
