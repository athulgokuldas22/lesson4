# include "utest.h"
# include "name_length.h"
UTEST(name_length, basic_tests) {
ASSERT_EQ(name_length(""), 0);
}