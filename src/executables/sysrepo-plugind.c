/**
 * @file sysrepo-plugind.c
 * @author Michal Vasko <mvasko@cesnet.cz>
 * @brief sysrepo plugin daemon
 *
 * @copyright
 * Copyright (c) 2018 - 2021 Deutsche Telekom AG.
 * Copyright (c) 2018 - 2021 CESNET, z.s.p.o.
 *
 * This source code is licensed under BSD 3-Clause License (the "License").
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://opensource.org/licenses/BSD-3-Clause
 */

#include <stdlib.h>
#include "sysrepo-plugind-startup.h"


int
main(int argc, char **argv)
{
    srpd_opts_t srpd_opts = { 0 };

    if (srpd_parse_options(argc, argv, &srpd_opts) != EXIT_SUCCESS) {
        return EXIT_FAILURE;
    }

    return srpd_startup(&srpd_opts, NULL, 0,
                        NULL, NULL, true, true);
}
