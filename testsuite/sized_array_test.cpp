#include "../source/utilities/sized_array.hpp"

#include <iostream>
#include <boost/test/unit_test.hpp>


using namespace nova;

BOOST_AUTO_TEST_CASE( sized_array_test_1 )
{
    sized_array<int> array(5);
    array[0] = -1;
    array[1] = 3;
    array[4] = 44;

    BOOST_REQUIRE_EQUAL( array.size(), 5u );
    BOOST_REQUIRE_EQUAL( array[1], 3 );
    BOOST_REQUIRE_EQUAL( array[0], -1 );
    BOOST_REQUIRE_EQUAL( *array.begin(), -1 );
    BOOST_REQUIRE_EQUAL( array.front(), -1 );
    BOOST_REQUIRE_EQUAL( array.back(), 44 );
    BOOST_REQUIRE_EQUAL( *array.rbegin(), 44 );
    BOOST_REQUIRE_EQUAL( *(array.rend()-1), -1 );

    sized_array<long> long_array(array);
    BOOST_REQUIRE_EQUAL( long_array.size(), 5u );
    BOOST_REQUIRE_EQUAL( long_array[1], 3 );
    BOOST_REQUIRE_EQUAL( long_array[0], -1 );
}
