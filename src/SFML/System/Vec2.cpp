// LICENSE AND COPYRIGHT (C) INFORMATION
// https://github.com/vittorioromeo/VRSFML/blob/master/license.md


////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "SFML/System/Vec2.hpp"


////////////////////////////////////////////////////////////
// Explicit instantiation definitions
////////////////////////////////////////////////////////////
template struct sf::Vec2<float>;
template struct sf::Vec2<double>;
template struct sf::Vec2<long double>;

#define SFML_INSTANTIATE_VECTOR2_INTEGRAL_MEMBER_FUNCTIONS(type)          \
    template type           sf::Vec2<type>::lengthSquared() const;        \
    template sf::Vec2<type> sf::Vec2<type>::perpendicular() const;        \
    template type           sf::Vec2<type>::dot(Vec2) const;              \
    template type           sf::Vec2<type>::cross(Vec2) const;            \
    template sf::Vec2<type> sf::Vec2<type>::componentWiseMul(Vec2) const; \
    template sf::Vec2<type> sf::Vec2<type>::componentWiseDiv(Vec2) const;

SFML_INSTANTIATE_VECTOR2_INTEGRAL_MEMBER_FUNCTIONS(bool)
SFML_INSTANTIATE_VECTOR2_INTEGRAL_MEMBER_FUNCTIONS(int)
SFML_INSTANTIATE_VECTOR2_INTEGRAL_MEMBER_FUNCTIONS(unsigned int)
// On a 32-bit target size_t is unsigned int: the instantiation for it above is the same one, and a second one is an error.
#if __SIZEOF_SIZE_T__ != __SIZEOF_INT__
SFML_INSTANTIATE_VECTOR2_INTEGRAL_MEMBER_FUNCTIONS(::sf::base::SizeT)
#endif
