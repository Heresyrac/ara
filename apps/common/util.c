// Copyright 2022 ETH Zurich and University of Bologna.
//
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author: Matteo Perotti <mperotti@iis.ee.ethz.ch>
//
// Utility functions for Ara software environment

#include "util.h"

#define FABS(x) ((x < 0) ? -x : x)

int *__dummy__errno__ptr__;

// Floating-point similarity check with threshold
int similarity_check(double a, double b, double threshold) {
  double diff = a - b;
  if (FABS(diff) > threshold)
    return 0;
  else
    return 1;
}

// Dummy declaration for libm exp
int *__errno(void) { return __dummy__errno__ptr__; }
