//
// Copyright (c) EasyCheng. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifdef _WIN32
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // "secure" CRT not available on all platforms  --add this at the top of all CPP files that give "function or variable may be unsafe" warnings
#endif
#include "targetver.h"
#endif

// standard C stuff
#include <stdio.h>
#include <memory.h>
#include <math.h>

// standard C++ stuff
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <memory>
#include <chrono>
#include <algorithm>
#include <iostream>
