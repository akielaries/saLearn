/*************************************************************************
 *
 *  Project
 *                        __  __ _______ _____  _  __
 *                       |  \/  |__   __|  __ \| |/ /
 *  ___  _ __   ___ _ __ | \  / |  | |  | |__) | ' /
 * / _ \| '_ \ / _ \ '_ \| |\/| |  | |  |  ___/|  <
 *| (_) | |_) |  __/ | | | |  | |  | |  | |    | . \
 * \___/| .__/ \___|_| |_|_|  |_|  |_|  |_|    |_|\_\
 *      | |
 *      |_|
 *
 *
 * Copyright (C) Akiel Aries, <akiel@akiel.org>, et al.
 *
 * This software is licensed as described in the file LICENSE, which
 * you should have received as part of this distribution. The terms
 * among other details are referenced in the official documentation
 * seen here : https://akielaries.github.io/openMTPK/ along with
 * important files seen in this project.
 *
 * You may opt to use, copy, modify, merge, publish, distribute
 * and/or sell copies of the Software, and permit persons to whom
 * the Software is furnished to do so, under the terms of the
 * LICENSE file. As this is an Open Source effort, all implementations
 * must be of the same methodology.
 *
 *
 *
 * This software is distributed on an AS IS basis, WITHOUT
 * WARRANTY OF ANY KIND, either express or implied.
 *
 ************************************************************************/

/*
 * Testing Linear Algebra Operations
 */
#include "../../include/linalg/matrix.hpp"
#include <gtest/gtest.h>
#include <limits.h>
#include <string>

using ::testing::DoubleLE;
using ::testing::FloatLE;
using ::testing::InitGoogleTest;
using namespace mtpk;

namespace {

TEST(matrix_print, print_mtx) {
    mtpk::Matrix<int> mat(3, 4);
    mat.print_mtx();

    std::tuple<Matrix<double>, Matrix<double>> matrices =
        std::make_tuple(Matrix<double>(5, 3), Matrix<double>(6, 4));

    std::get<0>(matrices).print_mtx();
    std::get<1>(matrices).print_mtx();
}

} // namespace