#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  py::class_<HarmonicOscillator>(m, "HarmonicOscillator");
    .def(py::init<>());
    .def("f", &HarmonicOscillator::f);
    // Not sure about this part
    .def("__repr__", [](py::object self){
            return py::str("{0.__class__.__name__}({0.f})").format(self);
        })
}
