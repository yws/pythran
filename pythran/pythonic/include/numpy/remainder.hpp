#ifndef PYTHONIC_INCLUDE_NUMPY_REMAINDER_HPP
#define PYTHONIC_INCLUDE_NUMPY_REMAINDER_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/types/numpy_broadcast.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"

#include <boost/simd/function/rem.hpp>

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME remainder
#define NUMPY_NARY_FUNC_SYM boost::simd::rem
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
