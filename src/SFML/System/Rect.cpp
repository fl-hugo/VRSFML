// LICENSE AND COPYRIGHT (C) INFORMATION
// https://github.com/vittorioromeo/VRSFML/blob/master/license.md


////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "SFML/System/Rect2.hpp"

#include "SFML/Base/SizeT.hpp"


////////////////////////////////////////////////////////////
// Explicit instantiation definitions
////////////////////////////////////////////////////////////
template class sf::Rect2<float>;
template class sf::Rect2<double>;
template class sf::Rect2<long double>;
template class sf::Rect2<int>;
template class sf::Rect2<unsigned int>;
// On a 32-bit target size_t is unsigned int: the instantiation for it above is the same one, and a second one is an error.
#if __SIZEOF_SIZE_T__ != __SIZEOF_INT__
template class sf::Rect2<sf::base::SizeT>;
#endif
