#include <boost/python.hpp>
#include "prime.hpp"

using namespace boost::python;

BOOST_PYTHON_MODULE(primeness)
{
    boost::python::def("checkForPrime", Prime::checkForPrime);
}