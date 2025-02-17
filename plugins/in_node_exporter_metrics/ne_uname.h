/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2015-2022 The Fluent Bit Authors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_IN_NE_UNAME_H
#define FLB_IN_NE_UNAME_H

#include "ne.h"

#if defined(__linux__) || defined(__APPLE__)
int ne_uname_init(struct flb_ne *ctx);
int ne_uname_update(struct flb_ne *ctx);
#else
static int ne_uname_init(struct flb_ne *ctx)
{
    return 0;
}

static int ne_uname_update(struct flb_ne *ctx)
{
    return 0;
}
#endif

#endif
