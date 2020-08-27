#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(getting_started1)
{

    // Add regular functions to the module.
    def("greet", greet);
    def("square", square);
}