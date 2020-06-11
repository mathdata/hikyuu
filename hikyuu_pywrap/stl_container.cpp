/*
 *  Copyright (c) 2019 hikyuu.org
 *
 *  Created on: 2020-5-24
 *      Author: fasiondog
 */

#include "pybind_utils.h"

namespace py = pybind11;

void export_stl_container(py::module& m) {
    py::bind_vector<std::vector<double>>(m, "PriceList", py::buffer_protocol());
}
